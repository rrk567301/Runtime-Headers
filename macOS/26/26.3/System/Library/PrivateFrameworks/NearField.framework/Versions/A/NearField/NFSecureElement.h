@class NSString, NSNumber, NFHardwareSecureElementInfo;

@interface NFSecureElement : NSObject {
    NFHardwareSecureElementInfo *_info;
    BOOL _isDirty;
}

@property (readonly) NSString *serialNumber;
@property (readonly) NSString *systemOSSerialNumber;
@property (readonly) NSString *rsaCertificate;
@property (readonly) NSString *eccCertificate;
@property (readonly) NSString *eckaCertificate;
@property (readonly) BOOL isProductionSigned;
@property (readonly) BOOL isInRestrictedMode;
@property (readonly) unsigned long long OSVersion;
@property (readonly) unsigned long long fullOSVersion;
@property (readonly) NSNumber *sequenceCounter;
@property (readonly) unsigned int supportedTechnologies;
@property (readonly) BOOL available;

+ (id)_getSharedHardwareManagerInTransitionCompletedState:(unsigned int *)a0;
+ (id)embeddedSecureElement;
+ (id)icefallSecureElement;
+ (id)embeddedSecureElementWithError:(id *)a0;
+ (id)embeddedSecureElementSerialNumber;
+ (unsigned int)supportedTechnologies;
+ (id)cachedEmbeddedSecureElementSerialNumber:(id *)a0;
+ (id)_getSharedHardwareManager;

- (BOOL)isSeshatAvailabledInRestrictedMode;
- (id)manifestQueryBlob;
- (id)_initWithInfo:(id)a0;
- (id)identifier;
- (id)info;
- (id)_executeOnUpdatedInstance:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_setIsInRestrictedPerformanceMode:(BOOL)a0;
- (void)_setIsInRestrictedMode:(BOOL)a0;
- (void)_markDirty;
- (unsigned int)hwType;
- (void)_updateSecureElementInfo:(id)a0;

@end
