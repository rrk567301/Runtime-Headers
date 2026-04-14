@protocol EMMutableDictionaryProtocol;

@interface EMListUnsubscribeDetector : NSObject {
    id<EMMutableDictionaryProtocol> _persistentDictionary;
}

+ (id)receivingAccountFromMessage:(id)a0;
+ (long long)unsubscribeTypeForHeader:(id)a0;
+ (id)validatedUnsubscribeTypeForHeader:(id)a0 dkimVerified:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMutableDictionary:(id)a0;
- (id)commandForMessage:(id)a0 dkimVerified:(unsigned long long)a1;
- (void)acceptCommand:(id)a0;
- (BOOL)shouldIgnoreMessageWithHeaders:(id)a0;
- (id)_listIDString:(id)a0;
- (id)_normalizedAddress:(id)a0;
- (id)_persistentKeyForHeaders:(id)a0;
- (id)_senderString:(id)a0;
- (id)commandForMessage:(id)a0 mailToOnly:(BOOL)a1 dkimVerified:(unsigned long long)a2;
- (void)ignoreCommand:(id)a0;
- (void)removeAllPersistedCommands;

@end
