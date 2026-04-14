@class NSDictionary;

@interface BRCDeviceConfiguration : NSObject {
    NSDictionary *_configuration;
}

@property (readonly, nonatomic, getter=getConfiguration) NSDictionary *configuration;

- (void).cxx_destruct;
- (BOOL)_isFPFS;
- (BOOL)_isIsSycBubble;
- (BOOL)_isSharedIPad:(id)a0;
- (BOOL)_isTesting;
- (id)getDeviceConfigurationString;

@end
