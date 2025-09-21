@class NSUUID;

@interface HDAssociatableObjectReference : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) Class objectClass;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 objectClass:(Class)a1;
- (id)persistentIDInTransaction:(id)a0 error:(id *)a1;

@end
