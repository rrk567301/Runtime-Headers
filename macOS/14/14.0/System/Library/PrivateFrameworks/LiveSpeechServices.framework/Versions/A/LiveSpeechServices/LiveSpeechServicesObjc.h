@interface LiveSpeechServicesObjc : NSObject

+ (id)favoritePhrases;
+ (void)addFavoritePhrase:(id)a0;
+ (id)observeFavoritePhrasesChanges:(id /* block */)a0;
+ (id)phraseShortcutKey;
+ (id)phraseTextKey;
+ (void)removeFavoritePhrase:(id)a0;

@end
