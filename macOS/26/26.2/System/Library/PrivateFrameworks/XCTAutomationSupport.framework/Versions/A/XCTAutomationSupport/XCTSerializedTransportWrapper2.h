@class NSObject;
@protocol OS_xpc_object;

@interface XCTSerializedTransportWrapper2 : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSObject<OS_xpc_object> *serializedTransport;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSerializedTransport:(id)a0;

@end
