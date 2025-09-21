@class NSString;

@interface SFSpeechSynthesisServerVoiceConfig : NSObject

@property (readonly, nonatomic) NSString *ospreyEndpointUrl;
@property (readonly, nonatomic) char useBlazar;
@property (readonly, nonatomic) char enableAuthentication;

+ (id)getTtsServerEndpointByCluster:(id)a0 withServiceType:(id)a1;

- (void).cxx_destruct;
- (id)initWithUrl:(id)a0 useBlazar:(char)a1 enableAuthentication:(char)a2;

@end
