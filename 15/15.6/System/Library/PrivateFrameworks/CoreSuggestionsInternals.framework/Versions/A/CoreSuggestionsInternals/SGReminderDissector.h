@class NSString, NSMutableDictionary, RTRoutineManager;

@interface SGReminderDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing> {
    NSMutableDictionary *_conversations;
    RTRoutineManager *_rtRoutineManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)enrichedTaggedCharacterRangesFromEntity:(id)a0 forMessage:(id)a1;
+ (id)enrichedTaggedCharacterRangesFromTaggedCharacterRanges:(id)a0 messageIsSent:(char)a1;
+ (id)getContactIdentifierForName:(id)a0 andEmail:(id)a1 ifMatchingPredicate:(id /* block */)a2;
+ (char)isReminderDueDateComponentsInPast:(id)a0 givenReferenceDate:(id)a1 allDay:(char)a2;

- (id)init;
- (void).cxx_destruct;
- (char)_isTestMessage:(id)a0;
- (id)storageLocationFromDueLocation:(id)a0;
- (id)_detectedReminderEnrichmentFromReminderMessage:(id)a0 parentEntity:(id)a1 language:(id)a2 parentMessage:(id)a3 startTimeProcessing:(unsigned long long)a4;
- (id)_reminderEnrichmentWithTitle:(id)a0 dueDateComponents:(id)a1 dueLocationType:(unsigned char)a2 dueLocation:(id)a3 dueLocationTrigger:(unsigned char)a4 sourceURL:(id)a5 reminderStatus:(unsigned char)a6 parentEntity:(id)a7 parentMessage:(id)a8 allDay:(char)a9;
- (id)_reminderMessageForTextMessage:(id)a0 withEntity:(id)a1 extractionModel:(id)a2 processingLanguage:(id)a3 preprocessing:(char)a4;
- (id)_testReminder:(id)a0 entity:(id)a1;
- (id)_validateDueDateComponents:(id)a0 dueLocation:(id)a1 forReminderMessages:(id)a2;
- (id)conversations;
- (id)defaultDueDateComponentsFromMessages:(id)a0;
- (void)dissectMailMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (void)dissectTextMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (id)dueDateComponentsFromMessages:(id)a0;
- (id)dueLocationFromMessages:(id)a0;
- (id)extractReminderFromMailMessage:(id)a0 entity:(id)a1;
- (id)extractReminderFromOwnedMailMessage:(id)a0 entity:(id)a1;
- (id)extractReminderFromTextMessage:(id)a0 entity:(id)a1 store:(id)a2;
- (id)fetchLocationOfInterestByType:(long long)a0 name:(id)a1;
- (id)initWithConversations:(id)a0 rtRoutineManager:(id)a1;
- (char)isAllDay:(id)a0;
- (char)isValidTextMessageForProcessing:(id)a0;
- (char)mailAddressIsAccountOwner:(id)a0;
- (id)processingLanguageForContent:(id)a0;
- (id)reminderTitleForContent:(id)a0;
- (id)reminderTitleFromMessages:(id)a0 forLanguage:(id)a1;

@end
