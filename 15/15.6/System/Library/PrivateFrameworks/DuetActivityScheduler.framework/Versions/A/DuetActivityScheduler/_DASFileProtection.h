@class NSString;

@interface _DASFileProtection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *fileProtection;

+ (id)complete;
+ (id)none;
+ (id)completeUnlessOpen;
+ (id)completeUntilFirstUserAuthentication;
+ (id)protectionWithType:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)indicatesProtection;
- (id)initWithProtection:(id)a0;
- (id)protectionType;

@end
