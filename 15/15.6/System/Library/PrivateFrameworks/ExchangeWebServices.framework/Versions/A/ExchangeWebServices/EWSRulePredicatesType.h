@class NSArray, EWSRulePredicateDateRangeType, NSString, EWSRulePredicateSizeRangeType;

@interface EWSRulePredicatesType : NSObject <XSDefinitionProvider>

@property (copy, nonatomic) NSArray *Categories;
@property (copy, nonatomic) NSArray *ContainsBodyStrings;
@property (copy, nonatomic) NSArray *ContainsHeaderStrings;
@property (copy, nonatomic) NSArray *ContainsRecipientStrings;
@property (copy, nonatomic) NSArray *ContainsSenderStrings;
@property (copy, nonatomic) NSArray *ContainsSubjectOrBodyStrings;
@property (copy, nonatomic) NSArray *ContainsSubjectStrings;
@property (nonatomic) long long FlaggedForAction;
@property (copy, nonatomic) NSArray *FromAddresses;
@property (copy, nonatomic) NSArray *FromConnectedAccounts;
@property (nonatomic) char HasAttachments;
@property (nonatomic) char HasAttachmentsSpecified;
@property (nonatomic) long long Importance;
@property (nonatomic) char IsApprovalRequest;
@property (nonatomic) char IsApprovalRequestSpecified;
@property (nonatomic) char IsAutomaticForward;
@property (nonatomic) char IsAutomaticForwardSpecified;
@property (nonatomic) char IsAutomaticReply;
@property (nonatomic) char IsAutomaticReplySpecified;
@property (nonatomic) char IsEncrypted;
@property (nonatomic) char IsEncryptedSpecified;
@property (nonatomic) char IsMeetingRequest;
@property (nonatomic) char IsMeetingRequestSpecified;
@property (nonatomic) char IsMeetingResponse;
@property (nonatomic) char IsMeetingResponseSpecified;
@property (nonatomic) char IsNDR;
@property (nonatomic) char IsNDRSpecified;
@property (nonatomic) char IsPermissionControlled;
@property (nonatomic) char IsPermissionControlledSpecified;
@property (nonatomic) char IsReadReceipt;
@property (nonatomic) char IsReadReceiptSpecified;
@property (nonatomic) char IsSigned;
@property (nonatomic) char IsSignedSpecified;
@property (nonatomic) char IsVoicemail;
@property (nonatomic) char IsVoicemailSpecified;
@property (copy, nonatomic) NSArray *ItemClasses;
@property (copy, nonatomic) NSArray *MessageClassifications;
@property (nonatomic) char NotSentToMe;
@property (nonatomic) char NotSentToMeSpecified;
@property (nonatomic) char SentCcMe;
@property (nonatomic) char SentCcMeSpecified;
@property (nonatomic) char SentOnlyToMe;
@property (nonatomic) char SentOnlyToMeSpecified;
@property (copy, nonatomic) NSArray *SentToAddresses;
@property (nonatomic) char SentToMe;
@property (nonatomic) char SentToMeSpecified;
@property (nonatomic) char SentToOrCcMe;
@property (nonatomic) char SentToOrCcMeSpecified;
@property (nonatomic) long long Sensitivity;
@property (retain, nonatomic) EWSRulePredicateDateRangeType *WithinDateRange;
@property (retain, nonatomic) EWSRulePredicateSizeRangeType *WithinSizeRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
