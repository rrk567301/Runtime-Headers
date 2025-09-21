@class NSArray;

@interface EWSGetInboxRulesResponseType : EWSResponseMessageType

@property (nonatomic) char OutlookRuleBlobExists;
@property (copy, nonatomic) NSArray *InboxRules;

+ (id)definition;

- (void).cxx_destruct;

@end
