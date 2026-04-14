@class NSString, NSData;

@interface IMPluginTypingPayloadValue : NSObject

@property (retain, nonatomic) NSString *pluginBundleID;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSData *typingIndicatorIcon;

- (void).cxx_destruct;

@end
