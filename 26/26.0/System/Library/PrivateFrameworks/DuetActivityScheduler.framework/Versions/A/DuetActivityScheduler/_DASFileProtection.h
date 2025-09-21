@class NSString;

@interface _DASFileProtection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *fileProtection;

+ (id)protectionWithType:(id)a0;
+ (id)complete;
+ (id)completeUnlessOpen;
+ (id)completeUntilFirstUserAuthentication;
+ (id)none;

- (id)initWithProtection:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)protectionType;
- (BOOL)indicatesProtection;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
