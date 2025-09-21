@class NSDictionary, NSSet;

@interface SGQuickResponsesToRobotsConfig : NSObject

@property (readonly, nonatomic) NSDictionary *supportedKeysAndContext;
@property (readonly, nonatomic) NSSet *generalContextWords;
@property (readonly, nonatomic) NSSet *triggerWords;
@property (readonly, nonatomic) unsigned long long leftContext;
@property (readonly, nonatomic) unsigned long long rightContext;
@property (readonly, nonatomic) unsigned long long generalContextLeft;
@property (readonly, nonatomic) unsigned long long generalContextRight;
@property (readonly, nonatomic) unsigned long long triggerContext;
@property (readonly, nonatomic) char enableFeature;
@property (readonly, nonatomic) char relaxContext;
@property (readonly, nonatomic) char useGeneralContext;
@property (readonly, nonatomic) char insignificantSender;
@property (readonly, nonatomic) float capsWordsRatioMax;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
