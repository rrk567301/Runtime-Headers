@interface SiriSharedUISAEResponseUISummary : NSObject

@property (readonly, nonatomic) unsigned long long currentResponseUIState;
@property (readonly, nonatomic) unsigned long long previousResultUIState;

- (BOOL)isDisplayingLatency;
- (id)initWithCurrentResponseUIState:(unsigned long long)a0 previousResultUIState:(unsigned long long)a1;
- (BOOL)isDisplayingPersistentExpandedResult;
- (BOOL)isDisplayingResult;

@end
