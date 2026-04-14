@interface CRFDRUtils : NSObject

+ (BOOL)isPropertySupported:(id)a0;
+ (struct __AMFDR { } *)_createFDRLocal;
+ (id)_getUnsealedMesaData:(id)a0 mesaState:(id)a1;
+ (void)_compareSealedAndLiveDataClasses:(id)a0 instances:(id)a1 liveClasses:(id)a2 liveInstances:(id)a3 results:(id)a4;
+ (void)_compareSerialNumberProperties:(id)a0 missingLiveData:(id)a1 results:(id)a2;
+ (BOOL)_getAllLiveDataClasses:(id *)a0 liveInstances:(id *)a1 missingLiveData:(id)a2 mesaState:(id)a3 error:(id *)a4;
+ (BOOL)_getAllSealedDataAndPropertiesFromManifest:(id)a0 properties:(id *)a1 classes:(id *)a2 instances:(id *)a3 error:(id *)a4;
+ (id)_getDataClassesFromSealingManifest;
+ (id)_getDataClassesFromSealingMap;
+ (id)_getManifestForDataClass:(id)a0;
+ (id)_getMesaState;
+ (id)_getPropertiesFromSealingMap;
+ (id)_getPropertyArrayFrom:(id)a0;
+ (id)_getUnsealedLASDataRaw;
+ (id)_getUnsealedLASDataWithLiveClasses:(id)a0 liveInstances:(id)a1;
+ (id)_getUnsealedServicePart;
+ (id)extractComponentsAndIdentifiers:(id)a0;
+ (id)findUnsealedDataWithError:(id *)a0;
+ (id)findUnsealedDataWithKey:(id)a0 error:(id *)a1;
+ (id)getData:(id)a0 instance:(id)a1;
+ (id)getDataPayload:(id)a0 instance:(id)a1;
+ (id)getDataPayloadDictWithClass:(id)a0 instance:(id)a1;
+ (id)getLocalSealingManifest;
+ (id)getLocalSealingManifestWithError:(id *)a0;
+ (id)getMacSupportedSPCs;
+ (id)getStringFromCert:(struct { char *x0; char *x1; })a0 WithTag:(unsigned long long)a1 AndOID:(id)a2;
+ (BOOL)hasMesaUnsealedData;
+ (BOOL)hasUnsealedComponent:(int)a0;
+ (BOOL)hasUnsealedComponentRequireOSUpdate;
+ (BOOL)isDataClassSupported:(id)a0;
+ (BOOL)isDcSignedCombinedDataClass:(id)a0 error:(id *)a1;
+ (BOOL)isDcSignedComponent:(int)a0 error:(id *)a1;
+ (BOOL)isDcSignedDataClass:(id)a0 instance:(id)a1 error:(id *)a2;
+ (BOOL)isDcSignedSealingManifest:(id *)a0;
+ (BOOL)isPrimaryDataClassSupported:(id)a0;
+ (BOOL)isRepairASIDSupported;
+ (id)isServicePartWithError:(id *)a0;
+ (id)localManifestProperties;
+ (BOOL)queryDeviceStagedSealedFromEAN:(BOOL)a0 error:(id *)a1;

@end
