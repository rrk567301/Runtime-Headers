@interface MFMessageActionRule : MFMessageRule {
    char _isMessageActionRule;
}

@property (nonatomic) char needsBody;

- (char)isActive;
- (char)doesMessageSatisfyCriteria:(id)a0 fetchBody:(char)a1 needsBody:(char *)a2 successfullyEvaluated:(char *)a3;
- (id)initWithActionProviderID:(id)a0;
- (char)isMessageActionRule;

@end
