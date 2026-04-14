@class NSUUID;

@interface HDAssociatableObjectReference : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) Class objectClass;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 objectClass:(Class)a1;
- (id)persistentIDInTransaction:(id)a0 error:(id *)a1;

@end
