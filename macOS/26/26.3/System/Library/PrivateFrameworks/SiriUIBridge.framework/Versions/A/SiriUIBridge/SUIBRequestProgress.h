@class SUIBNLRouterSummary, SUIBIntelligenceFlowActionSummary, SUIBIntelligenceFlowProgressUpdate, SUIBIntelligenceFlowStatusNotification;

@interface SUIBRequestProgress : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long progressType;
@property (readonly, nonatomic) SUIBNLRouterSummary *nlRouterSummary;
@property (readonly, nonatomic) SUIBIntelligenceFlowActionSummary *intelligenceFlowActionSummary;
@property (readonly, nonatomic) SUIBIntelligenceFlowProgressUpdate *intelligenceFlowProgressUpdate;
@property (readonly, nonatomic) SUIBIntelligenceFlowStatusNotification *intelligenceFlowStatusNotification;

- (id)initWithBuilder:(id /* block */)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
