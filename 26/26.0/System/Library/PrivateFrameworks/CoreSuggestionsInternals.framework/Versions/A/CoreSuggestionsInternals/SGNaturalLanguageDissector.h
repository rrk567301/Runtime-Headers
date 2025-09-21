@class NSString, NSMutableDictionary;

@interface SGNaturalLanguageDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing> {
    NSMutableDictionary *_conversations;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)allowNaturalLanguageDissector;
+ (id)ipsosMessageWithTextMessage:(id)a0 store:(id)a1;
+ (id)_personForCSPerson:(id)a0;
+ (id)ipsosMessageWithMailMessage:(id)a0 store:(id)a1;

- (id)_init;
- (void)dissectMailMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (void)dissectTextMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (void)addEnrichmentForEvents:(id)a0 forMessage:(id)a1 toEntity:(id)a2;
- (BOOL)_shouldProcessMessage:(id)a0 entity:(id)a1;
- (void)_tagNaturalLanguageEnrichmentsForEntity:(id)a0;
- (void)clearConversations;
- (id)conversationWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
