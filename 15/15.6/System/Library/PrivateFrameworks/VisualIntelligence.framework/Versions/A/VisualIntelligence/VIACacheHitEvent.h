@class VIACacheHitContext, NSString;

@interface VIACacheHitEvent : NSObject <VIAEvent>

@property (readonly, nonatomic) VIACacheHitContext *context;
@property (readonly, nonatomic) unsigned long long cachedResultQueryID;
@property (readonly, nonatomic) NSString *engagementSuggestionType;
@property (readonly, nonatomic) unsigned long long queryID;
@property (readonly, copy, nonatomic) NSString *originatingApplication;
@property (readonly, nonatomic) char shouldReportDirectly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)feedback;

@end
