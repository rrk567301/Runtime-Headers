@class NSArray;

@interface AMSUIWebFetchTreatmentsAction : AMSUIWebAction

@property (retain) NSArray *areaIds;
@property BOOL includeExperimentData;
@property BOOL includePayload;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
