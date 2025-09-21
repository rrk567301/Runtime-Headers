@class NSString, NSNumber, NFHardwareSecureElementInfo;

@interface NFSecureElement : NSObject {
    NFHardwareSecureElementInfo *_info;
    char _isDirty;
}

@property (readonly) NSString *serialNumber;
@property (readonly) NSString *systemOSSerialNumber;
@property (readonly) NSString *rsaCertificate;
@property (readonly) NSString *eccCertificate;
@property (readonly) NSString *eckaCertificate;
@property (readonly) char isProductionSigned;
@property (readonly) char isInRestrictedMode;
@property (readonly) unsigned long long OSVersion;
@property (readonly) unsigned long long fullOSVersion;
@property (readonly) NSNumber *sequenceCounter;
@property (readonly) unsigned int supportedTechnologies;
@property (readonly) BOOL available;

+ (id)embeddedSecureElement;
+ (id)icefallSecureElement;
+ (id)embeddedSecureElementSerialNumber;
+ (unsigned int)supportedTechnologies;
+ (id)embeddedSecureElementWithError:(id *)a0;
+ (id)cachedEmbeddedSecureElementSerialNumber:(id *)a0;

- (void).cxx_destruct;
- (id)identifier;
- (id)info;
- (id)_initWithInfo:(id)a0;
- (void)_markDirty;
- (id)_executeOnUpdatedInstance:(id /* block */)a0;
- (void)_setIsInRestrictedMode:(char)a0;
- (void)_setIsInRestrictedPerformanceMode:(char)a0;
- (void)_updateSecureElementInfo:(id)a0;
- (unsigned int)hwType;
- (char)isSeshatAvailabledInRestrictedMode;
- (id)manifestQueryBlob;

@end
