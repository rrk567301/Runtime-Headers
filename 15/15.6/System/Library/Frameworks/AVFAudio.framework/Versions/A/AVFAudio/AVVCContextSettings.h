@class NSString;

@interface AVVCContextSettings : NSObject

@property (nonatomic) long long activationMode;
@property (retain, nonatomic) NSString *activationDeviceUID;
@property (nonatomic) char announceCallsEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithMode:(long long)a0 deviceUID:(id)a1;

@end
