@class NSObject;
@protocol OS_xpc_object;

@interface REVideoRequestOptions : REResourceRequestOptions

@property (readonly, nonatomic) NSObject<OS_xpc_object> *receiverEndpoint;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithReceiverEndpoint:(id)a0;

@end
