@class SUIBIntelligenceFlowProgressUpdate, SUIBNLRouterSummary, SUIBIntelligenceFlowActionSummary;

@interface SUIBRequestProgressMutation : NSObject

@property (nonatomic) unsigned long long progressType;
@property (retain, nonatomic) SUIBNLRouterSummary *nlRouterSummary;
@property (retain, nonatomic) SUIBIntelligenceFlowActionSummary *intelligenceFlowActionSummary;
@property (retain, nonatomic) SUIBIntelligenceFlowProgressUpdate *intelligenceFlowProgressUpdate;

- (void).cxx_destruct;

@end
