@class NSDictionary;

@interface BRCDeviceConfiguration : NSObject {
    NSDictionary *_configuration;
}

@property (readonly, nonatomic, getter=getConfiguration) NSDictionary *configuration;

- (void).cxx_destruct;
- (char)_isTesting;
- (char)_isIsSycBubble;
- (char)_isSharedIPad:(id)a0;
- (id)getDeviceConfigurationString;

@end
