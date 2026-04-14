@class NSDictionary;

@interface ATXMessageSenderImportanceWeights : NSObject {
    NSDictionary *_messageSenderImportanceWeights;
}

- (void).cxx_destruct;
- (id)init;
- (double)isAudioMessage;
- (double)isVIP;
- (double)isEmergencyContact;
- (double)speedOfResponseToMessageContact;
- (double)contactHasBeencontactedToday;
- (double)isContactChatPinnedInMessage;
- (double)isFavoriteContact;
- (double)isFrequentlyContacted;
- (double)isMentionedInGroupMessage;
- (double)isiCloudFamilyMember;

@end
