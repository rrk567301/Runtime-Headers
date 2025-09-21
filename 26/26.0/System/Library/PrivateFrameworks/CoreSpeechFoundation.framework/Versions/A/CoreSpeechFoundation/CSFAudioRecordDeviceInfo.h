@class NSString, NSUUID;

@interface CSFAudioRecordDeviceInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *remoteDeviceUIDString;
@property (readonly, copy, nonatomic) NSString *halDeviceUID;
@property (readonly, nonatomic) BOOL isNarrowBand;
@property (readonly, copy, nonatomic) NSString *route;
@property (readonly, nonatomic) BOOL isRemoteDevice;
@property (readonly, copy, nonatomic) NSUUID *remoteDeviceUID;
@property (readonly, copy, nonatomic) NSString *remoteDeviceProductIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)xpcObject;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithRoute:(id)a0 isRemoteDevice:(BOOL)a1 remoteDeviceUID:(id)a2 remoteDeviceProductIdentifier:(id)a3;
- (id)initWithAVVCRecordDeviceInfo:(id)a0;
- (id)initWithRoute:(id)a0 isRemoteDevice:(BOOL)a1 remoteDeviceUID:(id)a2 remoteDeviceProductIdentifier:(id)a3 remoteDeviceUIDString:(id)a4 halDeviceUID:(id)a5 isNarrowBand:(BOOL)a6;

@end
