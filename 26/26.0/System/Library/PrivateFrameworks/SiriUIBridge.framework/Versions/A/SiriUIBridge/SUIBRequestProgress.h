@class SUIBNLRouterSummary, SUIBIntelligenceFlowActionSummary, SUIBIntelligenceFlowProgressUpdate, SUIBIntelligenceFlowStatusNotification;

@interface SUIBRequestProgress : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long progressType;
@property (readonly, nonatomic) SUIBNLRouterSummary *nlRouterSummary;
@property (readonly, nonatomic) SUIBIntelligenceFlowActionSummary *intelligenceFlowActionSummary;
@property (readonly, nonatomic) SUIBIntelligenceFlowProgressUpdate *intelligenceFlowProgressUpdate;
@property (readonly, nonatomic) SUIBIntelligenceFlowStatusNotification *intelligenceFlowStatusNotification;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithBuilder:(id /* block */)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
