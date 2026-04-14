@class NSString;

@interface ATXAVRouteInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) BOOL isExternalRoute;

- (id)encodeAsProto;
- (id)initWithDeviceName:(id)a0 deviceID:(id)a1 isExternalRoute:(BOOL)a2;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (void).cxx_destruct;

@end
