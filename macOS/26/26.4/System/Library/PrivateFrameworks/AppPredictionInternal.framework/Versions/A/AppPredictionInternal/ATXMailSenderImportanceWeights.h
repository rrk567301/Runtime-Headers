@class NSDictionary;

@interface ATXMailSenderImportanceWeights : NSObject {
    NSDictionary *_mailSenderImportanceWeights;
}

- (void).cxx_destruct;
- (id)init;
- (double)isVIP;
- (double)isEmergencyContact;
- (double)isFromMailingList;
- (double)isContactChatPinnedInMessage;
- (double)isFavoriteContact;
- (double)isFrequentlyContacted;
- (double)isiCloudFamilyMember;
- (double)mailContactHasBeencontactedToday;
- (double)speedOfResponseToMailContact;

@end
