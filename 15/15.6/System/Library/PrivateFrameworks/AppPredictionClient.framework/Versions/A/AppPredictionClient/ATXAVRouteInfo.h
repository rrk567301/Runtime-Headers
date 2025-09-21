@class NSString;

@interface ATXAVRouteInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) char isExternalRoute;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)initWithDeviceName:(id)a0 deviceID:(id)a1 isExternalRoute:(char)a2;

@end
