@interface IDDiagnosticsTransport : NSObject

+ (void)clearMessagesFromNVRAM;
+ (unsigned short)clientForInstallEvent:(id)a0;
+ (char)containsAPFSData:(id)a0;
+ (char)containsEFIData:(id)a0;
+ (char)containsGPUUpdateData:(id)a0;
+ (id)convertJSONStringToDictionary:(id)a0 error:(id *)a1;
+ (id)createPayloadFromData:(id)a0 currentBuild:(id)a1 seedProgram:(id)a2 watcherSession:(id)a3 forClient:(unsigned short)a4;
+ (char)efiApplePayloadExists;
+ (char)efiAppleRecoveryExists;
+ (char)efiBootDeviceExists;
+ (char)efiBootNextExists;
+ (void)forceNVRAMSync;
+ (id)formatInstallType:(id)a0;
+ (id)getPreviousShutdownCause;
+ (char)keyExistsInNVRAM:(id)a0;
+ (id)nameForClient:(unsigned short)a0;
+ (id)prependKeysInDictionary:(id)a0 withString:(id)a1;
+ (id)retrieveV1DataFromNVRAM;
+ (id)retrieveV2DataFromNVRAM;
+ (char)shouldRespectDU:(unsigned short)a0;
+ (id)stripOutAPFSData:(id)a0;
+ (id)stripOutEFIData:(id)a0;
+ (id)stripOutGPUFirmwareUpdate:(id)a0;
+ (id)stripOutSampledMetrics:(id)a0;

@end
