sdio-objs	:= SdioDrv.o msm_sdcc.o

wl1273-objs	:= WlanDrvIf.o osapi.o osmemapi.o osRgstry_parser.o \
			ipc_k.o WlanDrvWext.o CmdInterpretWext.o \
			RxBuf.o host_platform.o \
CmdBld.o CmdBldCmd.o CmdBldCmdIE.o CmdBldItr.o  CmdQueue.o \
RxQueue.o txCtrlBlk.o txHwQueue.o\
CmdMBox.o FwEvent.o HwInit.o RxXfer.o eventMbox.o fwDebug.o txResult.o txXfer.o\
MacServices.o MeasurementSrv.o MeasurementSrvSM.o PowerSrv.o PowerSrvSM.o ScanSrv.o ScanSrvSM.o measurementSrvDbgPrint.o \
TWDriver.o TWDriverCtrl.o TWDriverRadio.o TWDriverTx.o\
TwIf.o

#
#CmdBldCfg.o CmdBldCfgIE.o CmdBldItrIE.o
			

 
obj-$(CONFIG_WL1273) += tiwlan_drv.o
obj-$(CONFIG_WL1273_SDIO) += sdio.o

