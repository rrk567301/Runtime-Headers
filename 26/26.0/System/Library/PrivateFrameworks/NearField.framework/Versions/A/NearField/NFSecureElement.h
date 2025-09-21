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

+ (id)icefallSecureElement;
+ (unsigned int)supportedTechnologies;
+ (id)cachedEmbeddedSecureElementSerialNumber:(id *)a0;
+ (id)embeddedSecureElementWithError:(id *)a0;
+ (id)embeddedSecureElementSerialNumber;
+ (id)embeddedSecureElement;

- (void)_updateSecureElementInfo:(id)a0;
- (id)manifestQueryBlob;
- (id)identifier;
- (void)_setIsInRestrictedPerformanceMode:(BOOL)a0;
- (id)_executeOnUpdatedInstance:(id /* block */)a0;
- (id)_initWithInfo:(id)a0;
- (id)info;
- (void)_markDirty;
- (void)_setIsInRestrictedMode:(BOOL)a0;
- (unsigned int)hwType;
- (void).cxx_destruct;
- (BOOL)isSeshatAvailabledInRestrictedMode;

@end
