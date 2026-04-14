@class NSString;

@interface _DASFileProtection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *fileProtection;

+ (id)complete;
+ (id)completeUntilFirstUserAuthentication;
+ (id)none;
+ (id)completeUnlessOpen;
+ (id)protectionWithType:(id)a0;

- (id)protectionType;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtection:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)indicatesProtection;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
