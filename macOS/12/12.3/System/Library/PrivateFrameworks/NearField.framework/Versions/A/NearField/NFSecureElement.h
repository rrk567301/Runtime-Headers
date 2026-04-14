@class NSString, NSNumber, NFHardwareSecureElementInfo;

@interface NFSecureElement : NSObject {
    NFHardwareSecureElementInfo *_info;
    BOOL _isDirty;
}

@property (readonly) NSString *serialNumber;
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

+ (id)embeddedSecureElement;
+ (id)icefallSecureElement;
+ (unsigned int)supportedTechnologies;

- (void).cxx_destruct;
- (id)identifier;
- (id)info;
- (id)_initWithInfo:(id)a0;
- (void)_markDirty;
- (unsigned int)hwType;
- (void)_setIsInRestrictedMode:(BOOL)a0;
- (void)_updateSecureElementInfo:(id)a0;
- (void)_setIsInRestrictedPerformanceMode:(BOOL)a0;
- (void)_updateIfDirty;
- (id)manifestQueryBlob;
- (BOOL)isSeshatAvailabledInRestrictedMode;

@end
