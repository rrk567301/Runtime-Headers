@class NSString;

@interface _DASFileProtection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *fileProtection;

+ (id)completeUnlessOpen;
+ (id)complete;
+ (id)none;
+ (id)completeWhenUserInactive;
+ (id)protectionWithType:(id)a0;
+ (id)completeUntilFirstUserAuthentication;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithProtection:(id)a0;
- (void).cxx_destruct;
- (id)protectionType;
- (id)description;
- (BOOL)indicatesProtection;
- (id)initWithCoder:(id)a0;

@end
