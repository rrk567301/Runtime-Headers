@class PKApplicationMessageKey, NSDate;

@interface PKApplicationMessageRegistration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKApplicationMessageKey *key;
@property (readonly, nonatomic) NSDate *createdDate;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) BOOL badge;

+ (id)createWithKey:(id)a0 createdDate:(id)a1 priority:(unsigned long long)a2 badge:(BOOL)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
