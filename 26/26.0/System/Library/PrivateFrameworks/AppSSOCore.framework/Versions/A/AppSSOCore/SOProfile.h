@class NSArray, NSString, NSMutableDictionary;

@interface SOProfile : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_urlPredicates;
    NSMutableDictionary *_urlNoWildCards;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (retain, nonatomic) NSArray *URLPrefix;
@property (retain, nonatomic) NSArray *hosts;
@property (retain, nonatomic) NSString *extensionBundleIdentifier;
@property (retain, nonatomic) NSString *realm;
@property (retain, nonatomic) NSArray *deniedBundleIdentifiers;
@property (nonatomic) long long screenLockedBehavior;
@property (nonatomic) long long pssoAuthenticationMethod;

+ (id)stringWithScreenLockedBehavior:(long long)a0;
+ (id)stringWithAuthenticationMethod:(long long)a0;
+ (id)stringWithProfileType:(long long)a0;

- (BOOL)matchesURL:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)preLoadURLData;
- (void).cxx_destruct;

@end
