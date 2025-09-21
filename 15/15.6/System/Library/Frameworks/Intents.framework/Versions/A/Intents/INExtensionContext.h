@class NSString, NSUUID, NSArray;

@interface INExtensionContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic, setter=_setRecordRoute:) NSString *_recordRoute;
@property (copy, nonatomic, setter=_setRecordDeviceUID:) NSUUID *_recordDeviceUID;
@property (copy, nonatomic, setter=_setRecordDeviceIdentifier:) NSString *_recordDeviceIdentifier;
@property (copy, nonatomic, setter=_setAirPlayRouteIdentifiers:) NSArray *_airPlayRouteIdentifiers;
@property (nonatomic, setter=_setAudioSessionID:) unsigned int _audioSessionID;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
