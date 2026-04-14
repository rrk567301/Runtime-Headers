@class NSString, NSDictionary, NSDate;

@interface TFBetaApplicationInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *bundleVersion;
@property (retain, nonatomic) NSString *shortVersionString;
@property (retain, nonatomic) NSDictionary *localizedDisplayNames;
@property (retain, nonatomic) NSDictionary *localizedTestNotes;
@property (retain, nonatomic) NSString *primaryLocaleKey;
@property (retain, nonatomic) NSString *testerEmail;
@property (retain, nonatomic) NSString *developerName;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSString *iconUrlTemplate;
@property (nonatomic) BOOL iconNeedsMask;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
