@interface IMAssistantINMessageConverter : NSObject

+ (id)messageEffectTypeToExpressiveSendIdDictionary;
+ (long long)messageEffectTypeFromExpressiveSendId:(id)a0;
+ (id)expressiveSendIdFromMessageEffectType:(long long)a0;
+ (id)__INMessageLinkMetadataForLPLinkMetadata:(id)a0;
+ (id)__INSpeakableStringForMessage:(id)a0;
+ (id)__INSpeakableStringForChat:(id)a0;
+ (id)spiHandleForIMHandle:(id)a0 isMe:(BOOL)a1;
+ (id)INPersonsForSPIHandles:(id)a0 personProvider:(id)a1;
+ (id)makeINMessage:(long long)a0 message:(id)a1 numberOfAttachments:(long long)a2 personProvider:(id)a3 referencedINMessage:(id)a4 content:(id)a5;
+ (id)INMessagesForSPIMessage:(id)a0 personProvider:(id)a1;
+ (id)_stringByRemovingMessagesControlCharactersFromString:(id)a0;
+ (id)INMessageForOutgoingIMMessage:(id)a0 toChat:(id)a1 messageType:(long long)a2 personProvider:(id)a3;

@end
