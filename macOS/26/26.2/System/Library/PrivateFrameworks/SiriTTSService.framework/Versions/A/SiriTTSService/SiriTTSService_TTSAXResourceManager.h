@class NSArray, TTSAXResourceManager;

@interface SiriTTSService_TTSAXResourceManager : NSObject

@property (class, readonly, nonatomic) SiriTTSService_TTSAXResourceManager *sharedInstance;

@property (retain, nonatomic) NSArray *allCompactResources;
@property (retain, nonatomic) TTSAXResourceManager *axManager;

- (void).cxx_destruct;
- (id)init;

@end
