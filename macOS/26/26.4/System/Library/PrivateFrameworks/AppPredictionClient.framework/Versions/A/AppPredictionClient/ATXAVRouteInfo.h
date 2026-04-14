@class NSString;

@interface ATXAVRouteInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) BOOL isExternalRoute;

- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDeviceName:(id)a0 deviceID:(id)a1 isExternalRoute:(BOOL)a2;
- (id)initWithProto:(id)a0;
- (id)initWithCoder:(id)a0;

@end
