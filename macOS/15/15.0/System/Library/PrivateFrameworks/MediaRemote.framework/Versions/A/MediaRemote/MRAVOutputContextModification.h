@class NSArray, MRGroupTopologyModificationRequest;

@interface MRAVOutputContextModification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *discoveredConcreteOutputDevices;
@property (readonly, nonatomic) NSArray *avOutputDevices;
@property (readonly, nonatomic) MRGroupTopologyModificationRequest *request;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRequest:(id)a0;
- (void)modifyWithOutputContext:(id)a0 queue:(id)a1 completion:(id /* block */)a2;

@end
