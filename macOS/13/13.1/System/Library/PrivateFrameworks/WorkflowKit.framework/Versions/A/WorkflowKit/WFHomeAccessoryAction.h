@class HMHome, NSArray, NSString;

@interface WFHomeAccessoryAction : WFAction <WFHomeManagerEventObserver>

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSArray *actionSets;
@property (readonly, nonatomic) NSArray *shortcutsDictionaryRepresentations;
@property (readonly, nonatomic) NSString *homeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)homeAccessoryActionWithHome:(id)a0 actionSets:(id)a1;

- (void)dealloc;
- (id)localizedName;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (id)homeName;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)initializeParameters;
- (id)localizedAttribution;
- (id)localizedDescriptionSummary;
- (void)performHomeAccessoryAction;
- (id)parameterSummaryString;
- (void)localizedParameterSummaryWithCompletion:(id /* block */)a0;
- (id)localizedSummaryText;

@end
