@class IDSDevice, NSArray, NSString, NSData;

@interface IDSActivityUpdate : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char isDeviceOnline;
@property (retain, nonatomic) IDSDevice *matchingDevice;
@property (retain, nonatomic) NSArray *URIs;
@property (readonly, nonatomic) NSString *subActivity;
@property (readonly, nonatomic) NSData *pushToken;
@property (readonly, nonatomic) unsigned long long serverTimestamp;
@property (readonly, nonatomic) NSData *clientContext;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSubActivity:(id)a0 pushToken:(id)a1 serverTimestamp:(unsigned long long)a2 clientContext:(id)a3 isDeviceOnline:(char)a4;

@end
