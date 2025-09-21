@class NSDictionary;

@interface FedStatsPluginBiomeStreamPruner : NSObject

@property (retain) NSDictionary *biomeStreamAssociation;

+ (id)sharedInstance;
+ (void)pruneBiomeStream:(id)a0 forNamespace:(id)a1 eventsPassingTest:(id /* block */)a2;

- (void).cxx_destruct;
- (id)initWithBiomeStreamAssociation:(id)a0;

@end
