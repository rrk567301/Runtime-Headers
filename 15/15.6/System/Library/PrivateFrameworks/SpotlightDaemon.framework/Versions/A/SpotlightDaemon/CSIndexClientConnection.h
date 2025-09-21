@class MDSearchableIndexService, SDConnectionConfiguration;

@interface CSIndexClientConnection : NSObject

@property (readonly, nonatomic) SDConnectionConfiguration *configuration;
@property (readonly, nonatomic) char quotaDisabled;
@property (readonly, nonatomic) MDSearchableIndexService *service;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 indexer:(id)a1;
- (id)initWithConnection:(id)a0 indexer:(id)a1;

@end
