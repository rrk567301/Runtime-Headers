@interface ICPassphraseStrategyUtilities : NSObject

+ (BOOL)setPassphrase:(id)a0 hint:(id)a1 forAccount:(id)a2 rewrapNoteBlock:(id /* block */)a3;
+ (BOOL)hasPassphraseSetForObject:(id)a0;
+ (BOOL)isPassphraseCorrect:(id)a0 forObject:(id)a1 usingKeysFromObject:(id)a2;
+ (BOOL)canKey:(id)a0 decryptObject:(id)a1;

@end
