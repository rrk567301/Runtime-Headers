@class NSString;

@interface CHUISControlInstanceConfiguration : NSObject <NSCopying, NSMutableCopying> {
    void /* unknown type, empty encoding */ _configuration;
}

@property (nonatomic, readonly) BOOL canAppearInSecureEnvironment;
@property (nonatomic, readonly) BOOL supportsLowLuminance;
@property (nonatomic, readonly) unsigned long long preferredColorScheme;
@property (nonatomic, readonly) NSString *launchOrigin;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(void *)a0;

@end
