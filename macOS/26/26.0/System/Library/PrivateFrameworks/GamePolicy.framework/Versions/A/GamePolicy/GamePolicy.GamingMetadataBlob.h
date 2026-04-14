@interface GamePolicy.GamingMetadataBlob : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ processBundleIdentifierAllowList;
    void /* unknown type, empty encoding */ processBundleIdentifierBlockList;
    void /* unknown type, empty encoding */ processCriticalServiceIdentifierList;
    void /* unknown type, empty encoding */ processCriticalServiceProcessNameList;
    void /* unknown type, empty encoding */ launchersMappedToCriticalServices;
    void /* unknown type, empty encoding */ processNameAllowList;
    void /* unknown type, empty encoding */ processPartialPathAllowList;
    void /* unknown type, empty encoding */ processPartialPathBlockList;
    void /* unknown type, empty encoding */ processNameBlockList;
    void /* unknown type, empty encoding */ launchers;
    void /* unknown type, empty encoding */ overlayInvocableAlowList;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
