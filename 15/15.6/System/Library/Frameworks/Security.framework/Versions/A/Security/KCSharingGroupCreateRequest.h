@class KCSharingGroup;

@interface KCSharingGroupCreateRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) KCSharingGroup *group;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNewGroup:(id)a0;

@end
