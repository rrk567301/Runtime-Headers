@class NSMutableDictionary;

@interface SFSSOspreyTTSClientFactory : NSObject

@property (retain, nonatomic) NSMutableDictionary *ospreyClientFactory;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeAll;
- (id)getOspreyClientByUrl:(id)a0;
- (id)getOspreyClientByUrl:(id)a0 useBlazar:(char)a1 enableAuthentication:(char)a2;

@end
