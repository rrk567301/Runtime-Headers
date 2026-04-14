@class NSString;

@interface BMNowPlayingOutputDevice : NSObject

@property (readonly, nonatomic) unsigned long long deviceType;
@property (readonly, nonatomic) unsigned long long deviceSubType;
@property (readonly, nonatomic) NSString *deviceId;

- (id)initWithDeviceType:(unsigned long long)a0 deviceSubType:(unsigned long long)a1 deviceId:(id)a2;
- (id)proto;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
