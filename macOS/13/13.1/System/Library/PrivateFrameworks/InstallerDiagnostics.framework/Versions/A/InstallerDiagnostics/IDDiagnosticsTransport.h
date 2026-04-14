@interface IDDiagnosticsTransport : NSObject

+ (id)retrieveV1DataFromNVRAM;
+ (id)retrieveV2DataFromNVRAM;
+ (void)clearMessagesFromNVRAM;
+ (BOOL)keyExistsInNVRAM:(id)a0;
+ (void)forceNVRAMSync;
+ (BOOL)containsAPFSData:(id)a0;
+ (id)convertJSONStringToDictionary:(id)a0 error:(id *)a1;
+ (id)stripOutAPFSData:(id)a0;
+ (BOOL)containsEFIData:(id)a0;
+ (id)stripOutEFIData:(id)a0;
+ (BOOL)efiBootDeviceExists;
+ (BOOL)efiAppleRecoveryExists;
+ (BOOL)efiBootNextExists;
+ (BOOL)efiApplePayloadExists;
+ (id)getPreviousShutdownCause;
+ (id)stripOutSampledMetrics:(id)a0;
+ (BOOL)containsGPUUpdateData:(id)a0;
+ (id)stripOutGPUFirmwareUpdate:(id)a0;
+ (id)prependKeysInDictionary:(id)a0 withString:(id)a1;
+ (unsigned short)clientForInstallEvent:(id)a0;
+ (id)nameForClient:(unsigned short)a0;
+ (BOOL)shouldRespectDU:(unsigned short)a0;
+ (id)formatInstallType:(id)a0;
+ (id)createPayloadFromData:(id)a0 currentBuild:(id)a1 seedProgram:(id)a2 watcherSession:(id)a3 forClient:(unsigned short)a4;

@end
