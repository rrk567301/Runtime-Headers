@class PKApplicationMessageKey, NSDate;

@interface PKApplicationMessageRegistration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) PKApplicationMessageKey *key;
@property (readonly, nonatomic) NSDate *createdDate;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) BOOL badge;

+ (id)createWithKey:(id)a0 createdDate:(id)a1 priority:(unsigned long long)a2 badge:(BOOL)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
