@interface PersonalHotspotRelay : NSObject

@property (nonatomic) char isReady;
@property (nonatomic) unsigned int softAPClientCount;
@property (nonatomic) unsigned int wifiNanClientCount;

+ (id)sharedInstance;

@end
