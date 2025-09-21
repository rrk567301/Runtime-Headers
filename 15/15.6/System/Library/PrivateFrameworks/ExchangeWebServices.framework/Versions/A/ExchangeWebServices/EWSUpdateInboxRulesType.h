@class NSString, NSArray;

@interface EWSUpdateInboxRulesType : EWSBaseRequestType

@property (retain, nonatomic) NSString *MailboxSmtpAddress;
@property (nonatomic) char RemoveOutlookRuleBlob;
@property (retain, nonatomic) NSArray *Operations;

+ (id)definition;

- (void).cxx_destruct;

@end
