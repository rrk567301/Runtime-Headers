@interface AXSSVoiceTagger : NSObject

+ (id)voiceTagsForContent:(id)a0 preferredLangauge:(id)a1;
+ (id)markupVoiceTagForAttributedString:(id)a0 preferredLangauge:(id)a1;
+ (id)_currentLineContentForTag:(id)a0 inTags:(id)a1;
+ (id)_primaryDialectForTag:(id)a0 inTags:(id)a1;

@end
