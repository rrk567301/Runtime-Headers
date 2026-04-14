@interface HKDataCollectorState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long collectionType;
@property (readonly) long long priority;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)cloneWithNewPriority:(long long)a0;
- (id)cloneWithNewType:(unsigned long long)a0;
- (id)initWithType:(unsigned long long)a0 priority:(long long)a1;

@end
