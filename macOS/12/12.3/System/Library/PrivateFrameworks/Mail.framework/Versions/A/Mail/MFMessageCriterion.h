@class NSString, NSArray;

@interface MFMessageCriterion : MFCriterion {
    NSString *_originalGroupUniqueID;
}

@property (nonatomic) unsigned int ruleType;
@property (readonly, copy) NSString *originalGroupUniqueID;
@property long long specialMailboxTypeCode;
@property (copy) NSString *groupUniqueID;
@property (readonly, copy, nonatomic) NSArray *recursiveGroupUniqueIDs;
@property (readonly, nonatomic) BOOL hasQualifier;
@property (readonly, nonatomic) MFMessageCriterion *criterionByExpandingSpecialMailboxCriterion;
@property (readonly, copy, nonatomic) NSArray *emailAddressesForGroupCriterion;
@property (readonly, copy, nonatomic) NSArray *emailAddressesForVIPCriterion;
@property (readonly, nonatomic) BOOL containsLastViewedDateCriterion;
@property (readonly, nonatomic) BOOL containsIncludeConversationsCriterion;
@property (readonly, nonatomic) BOOL containsMessageIsNotInATrashMailboxCriterion;
@property (readonly, nonatomic) BOOL containsRelativeDateCriteria;
@property (readonly, nonatomic) BOOL containsAddressBookCriteria;

+ (void)initialize;
+ (long long)criterionTypeForString:(id)a0;
+ (id)stringForCriterionType:(long long)a0;
+ (void)_updateAddressDisplayNames:(id)a0;
+ (id)messagesInConversationCriterionWithConversationIDs:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEquivalent:(id)a0;
- (id)initWithDictionary:(id)a0 andRemoveRecognizedKeysIfMutable:(BOOL)a1;
- (void)setCriterionIdentifier:(id)a0;
- (id)dictionaryRepresentationIncludePII:(BOOL)a0;
- (BOOL)containsSpotlightCriterion;
- (BOOL)isValid:(id *)a0 options:(unsigned int)a1;
- (BOOL)hasExpression;
- (BOOL)isExpressibleInTigerSchema;
- (id)SQLExpressionWithContext:(struct { unsigned long long x0; unsigned long long x1; BOOL x2; BOOL x3; } *)a0 depth:(unsigned long long)a1 enclosingSmartMailboxes:(id)a2;
- (BOOL)hasNumberCriterion;
- (id)fixOnceWithExpandedSmartMailboxes:(id)a0 forSpotlight:(BOOL)a1;
- (id)criterionByMergingSpotlightCriteria;
- (id)ruleHeader;
- (void)setRuleHeader:(id)a0;
- (unsigned int)ruleQualifier;
- (void)setRuleQualifier:(unsigned int)a0;
- (id)ruleExpression;
- (void)setRuleExpression:(id)a0;
- (id)_headersRequiredForEvaluation;
- (BOOL)_doesGroup:(id)a0 containSender:(id)a1;
- (BOOL)_evaluateJunkMailHeaders:(id)a0;
- (BOOL)_messageIsSignedByMe:(id)a0;
- (BOOL)_messageHasPassBookAttachment:(id)a0;
- (BOOL)evaluateMessage:(id)a0;
- (BOOL)_mailboxURLString:(id)a0 satisfiesQualifier:(long long)a1 forExpression:(id)a2;
- (BOOL)_evaluateMessage:(id)a0 fetchBody:(BOOL)a1 needsBody:(BOOL *)a2 successfullyEvaluated:(BOOL *)a3;
- (BOOL)_evaluateAddressBookCriterion:(id)a0;
- (BOOL)_evaluateBodyCriterion:(id)a0 fetchBody:(BOOL)a1 needsBody:(BOOL *)a2;
- (BOOL)_evaluateHeaderCriterion:(id)a0;
- (BOOL)_evaluateMemberOfGroupCriterion:(id)a0;
- (BOOL)_evaluateMemberOfVIPSendersCriterion:(id)a0;
- (BOOL)_evaluateAccountCriterion:(id)a0;
- (BOOL)_evaluateJunkMailCriterion:(id)a0 fetchBody:(BOOL)a1 needsBody:(BOOL *)a2;
- (BOOL)_evaluateDateCriterion:(id)a0;
- (BOOL)_evaluateAddressHistoryCriterion:(id)a0 successfullyEvaluated:(BOOL *)a1;
- (BOOL)_evaluateFullNameCriterion:(id)a0;
- (BOOL)_evaluateIsDigitallySignedCriterion:(id)a0;
- (BOOL)_evaluateIsEncryptedCriterion:(id)a0;
- (BOOL)_evaluatePriorityIsNormalCriterion:(id)a0;
- (BOOL)_evaluatePriorityIsHighCriterion:(id)a0;
- (BOOL)_evaluatePriorityIsLowCriterion:(id)a0;
- (BOOL)_evaluateAttachmentCriterion:(id)a0 fetchBody:(BOOL)a1 needsBody:(BOOL *)a2;
- (BOOL)_evaluateAttachmentTypeCriterion:(id)a0 fetchBody:(BOOL)a1 needsBody:(BOOL *)a2;
- (BOOL)_evaluateMessageTypeCriterion:(id)a0;
- (BOOL)_evaluateCompoundCriterion:(id)a0;
- (BOOL)_evaluateMailboxCriterion:(id)a0;
- (BOOL)_evaluateFlagCriterion:(id)a0;
- (BOOL)_evaluateSpecialMailboxCriterion:(id)a0;
- (BOOL)_evaluateFlaggedStatusCriterion:(id)a0;
- (BOOL)_evaluateGmailLabelCriterion:(id)a0;
- (BOOL)_evaluateSizeCriterion:(id)a0;
- (BOOL)isSatisfiedByMailboxURL:(id)a0;
- (BOOL)allowsEmptyExpression;
- (BOOL)_containsCriterion:(long long)a0;
- (void)addHeadersRequiredForRoutingToArray:(id)a0;
- (BOOL)doesMessageSatisfyRuleEvaluationCriterion:(id)a0 fetchBody:(BOOL)a1 needsBody:(BOOL *)a2 successfullyEvaluated:(BOOL *)a3;
- (id)criterionByExpandingGroup;

@end
