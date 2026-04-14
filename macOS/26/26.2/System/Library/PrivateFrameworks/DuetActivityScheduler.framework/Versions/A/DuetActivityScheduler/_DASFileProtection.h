@class NSString;

@interface _DASFileProtection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *fileProtection;

+ (id)complete;
+ (id)completeUntilFirstUserAuthentication;
+ (id)none;
+ (id)protectionWithType:(id)a0;
+ (id)completeUnlessOpen;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProtection:(id)a0;
- (BOOL)indicatesProtection;
- (void).cxx_destruct;
- (id)description;
- (id)protectionType;

@end
