sdio-objs	:= SdioDrv.o msm_sdcc.o
WlanDrvIf-objs	:= DrvMain.o EvHandler.o CmdHndlr.o CmdDispatcher.o txCtrl.o txCtrlServ.o \
txCtrlParams.o txPort.o txDataQueue.o TxDataClsfr.o txMgmtQueue.o Ctrl.o \
GeneralUtil.o TrafficMonitor.o rx.o PowerMgr.o PowerMgrKeepAlive.o\
PowerMgrDbgPrint.o healthMonitor.o siteMgr.o StaCap.o siteHash.o\
systemConfig.o templates.o mlmeBuilder.o mlmeParser.o mlmeSm.o assocSM.o \
authSm.o openAuthSm.o sharedKeyAuthSm.o scr.o ScanCncn.o ScanCncnSm.o \
ScanCncnSmSpecific.o ScanCncnOsSm.o ScanCncnApp.o scanResultTable.o \
currBss.o qosMngr.o trafficAdmControl.o SwitchChannel.o measurementMgr.o \
measurementMgrSM.o spectrumMngmntMgr.o requestHandler.o SoftGemini.o \
regulatoryDomain.o conn.o connIbss.o connInfra.o sme.o smeSm.o smeSelect.o \
rsn.o mainSecSm.o mainSecNull.o mainSecKeysOnly.o admCtrl.o admCtrlWep.o \
admCtrlNone.o admCtrlWpa.o admCtrlWpa2.o apConn.o keyDerive.o keyDeriveWep.o \
keyParser.o keyDeriveAes.o keyDeriveTkip.o broadcastKeySM.o unicastKeySM.o \
broadcastKey802_1x.o unicastKey802_1x.o broadcastKeyNone.o unicastKeyNone.o \
keyParserExternal.o keyParserWep.o mainKeysSm.o externalSec.o scanMngr.o \
roamingMngr.o roamingMngr_manualSM.o roamingMngr_autoSM.o \
MacServices.o ScanSrv.o ScanSrvSM.o PowerSrv.o PowerSrvSM.o\
MeasurementSrv.o MeasurementSrvSM.o measurementSrvDbgPrint.o \
TWDriver.o TWDriverTx.o TWDriverCtrl.o TWDriverRadio.o CmdQueue.o \
CmdBld.o CmdBldCfg.o CmdBldCmd.o CmdBldItr.o \
CmdBldCmdIE.o \
txHwQueue.o txCtrlBlk.o RxQueue.o CmdMBox.o txResult.o txXfer.o \
FwEvent.o RxXfer.o eventMbox.o HwInit.o fwDebug.o TwIf.o TxnQueue.o SdioBusDrv.o \
fsm.o GenSM.o report.o queue.o context.o timer.o rate.o freq.o \

dbg-obj := sconnDebug.o siteMgrDebug.o ctrlDbg.o RxDbg.o TxDbg.o debug.o PowerMgrDebug.o \
rsnDbg.o TWD_Debug.o measurementDbg.o scanCncnDbg.o qosMngrDbg.o ScanMngrDbg.o \
roamingMgrDebug.o scrDbg.o SoftGeminiDbg.o HealthMonitorDbg.o smeDebug.o \
fwdriverdebug.o MibDbg.o TwIfDebug.o

#CmdBldCfgIE.o CmdBldItrIE.o \

obj-$(CONFIG_WL1273) += WlanDrvIf.o
obj-$(CONFIG_WL1273_SDIO) += sdio.o

