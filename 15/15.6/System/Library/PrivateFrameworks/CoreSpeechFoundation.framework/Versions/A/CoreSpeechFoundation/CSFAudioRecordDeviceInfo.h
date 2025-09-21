@class NSString, NSUUID;

@interface CSFAudioRecordDeviceInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *remoteDeviceUIDString;
@property (readonly, copy, nonatomic) NSString *halDeviceUID;
@property (readonly, nonatomic) char isNarrowBand;
@property (readonly, copy, nonatomic) NSString *route;
@property (readonly, nonatomic) char isRemoteDevice;
@property (readonly, copy, nonatomic) NSUUID *remoteDeviceUID;
@property (readonly, copy, nonatomic) NSString *remoteDeviceProductIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCObject:(id)a0;
- (id)initWithRoute:(id)a0 isRemoteDevice:(char)a1 remoteDeviceUID:(id)a2 remoteDeviceProductIdentifier:(id)a3;
- (id)xpcObject;
- (id)initWithAVVCRecordDeviceInfo:(id)a0;
- (id)initWithRoute:(id)a0 isRemoteDevice:(char)a1 remoteDeviceUID:(id)a2 remoteDeviceProductIdentifier:(id)a3 remoteDeviceUIDString:(id)a4 halDeviceUID:(id)a5 isNarrowBand:(char)a6;

@end
