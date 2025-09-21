@class NSString;

@interface CHUISControlInstanceConfiguration : NSObject <NSCopying, NSMutableCopying> {
    void /* unknown type, empty encoding */ _configuration;
}

@property (nonatomic, readonly) char canAppearInSecureEnvironment;
@property (nonatomic, readonly) char supportsLowLuminance;
@property (nonatomic, readonly) unsigned long long preferredColorScheme;
@property (nonatomic, readonly) NSString *launchOrigin;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(void *)a0;
- (void).cxx_destruct;

@end
