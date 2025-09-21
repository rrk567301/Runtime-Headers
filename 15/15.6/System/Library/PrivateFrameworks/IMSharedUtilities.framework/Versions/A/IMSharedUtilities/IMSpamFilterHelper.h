@interface IMSpamFilterHelper : NSObject

+ (char)isKnownContact:(id)a0;
+ (id)mapID:(id)a0 usingKey:(id)a1;
+ (id)_additionalAccountRegionsEligibleForJunkFiltering;
+ (id)_additionalTelephonyCountryCodesEligibleForJunkFiltering;
+ (id)_cnRecordForAliases:(id)a0;
+ (char)accountCountryIsCandidateForHawking:(id)a0;
+ (char)accountCountryIsCandidateForSMSFilter:(id)a0;
+ (char)accountCountryIsCandidateForiMessageJunk:(id)a0;
+ (char)accountRegionIsCandidateForHawking:(id)a0;
+ (id)accountRegionsEligibleForJunkFiltering;
+ (char)anyParticipantIsCandidateForBlackhole:(id)a0;
+ (char)anyParticipantIsKnownContact:(id)a0;
+ (id)defaultAccountRegionsEligibleForJunkFiltering;
+ (id)defaultTelephonyCountryCodesEligibleForJunkFiltering;
+ (id)internationalSpamFilterLearnMoreURL;
+ (char)isBlackholeEnabledForEligibleAccounts:(char)a0;
+ (char)isChineseSpamFilteringEnabled;
+ (char)isFilterUnknownSendersEnabled;
+ (char)isInternationalSpamFilteringEnabled;
+ (char)isiMessageJunkFilterEnabled;
+ (void)participantsAreiMessagable:(id)a0 completionBlock:(id /* block */)a1;
+ (char)receiverIsCandidateForAppleSMSFilterSubClassification:(id)a0;
+ (char)receiverIsCandidateForAppleSMSFilterSubClassificationWithSimSlot:(long long)a0;
+ (char)receiverIsCandidateForDefaultAppleSMSFilter:(id)a0;
+ (char)receiverIsCandidateForDefaultAppleSMSFilterWithSimSlot:(long long)a0;
+ (char)receiverIsCandidateForHawking:(id)a0;
+ (char)receiverIsCandidateForSMSFilter:(id)a0;
+ (char)receiverIsCandidateForSMSFilterWithSimSlot:(long long)a0;
+ (char)receiverIsCandidateForiMessageJunk:(id)a0;
+ (char)receiverIsEnabledForSMSFilter:(id)a0;
+ (char)receivingID:(id)a0 isCountryCode:(id)a1;
+ (id)sanitizeParticipants:(id)a0 excludingHandles:(id)a1;
+ (char)senderIsCandidateForBlackhole:(id)a0;
+ (char)senderIsCandidateForSMSDowngrade:(id)a0;
+ (char)senderIsChinaHandle:(id)a0;
+ (char)senderIsKnownContact:(id)a0;
+ (char)shouldBlackholeGroupMessageFromSender:(id)a0 toRecipient:(id)a1 ifRecipientIsCandidate:(char)a2 withOtherParticipants:(id)a3 givenHistory:(char)a4 forEligibleAccounts:(char)a5;
+ (char)shouldBlackholeMessageFromSender:(id)a0 toRecipient:(id)a1 ifRecipientIsCandidate:(char)a2 givenHistory:(char)a3 forEligibleAccounts:(char)a4;
+ (char)shouldDowngradeToRecipient:(id)a0 fromSender:(id)a1 ifCapableOfSMS:(char)a2 withConversationDowngradeState:(char)a3 andConversationHistoryState:(char)a4;
+ (char)shouldShowSMSWarningForSender:(id)a0 forRecipient:(id)a1 withConversationHistory:(char)a2;
+ (id)telephonyCountryCodesEligibleForJunkFiltering;

@end
