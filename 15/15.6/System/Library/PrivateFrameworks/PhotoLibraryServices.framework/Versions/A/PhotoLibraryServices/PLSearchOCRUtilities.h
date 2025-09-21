@interface PLSearchOCRUtilities : NSObject

+ (id)spotlightTextLinesFromDocumentObservation:(id)a0;
+ (id)_ocrTextLineCandidatesFromTextBlockObservation:(id)a0 tokenizer:(id)a1 allowLowConfidence:(char)a2;
+ (id)_ocrTextLinesFromDocumentObservation:(id)a0 allowLowConfidence:(char)a1;
+ (id)_textFoundLine;
+ (id)_wordsFromString:(id)a0 usingTokenizer:(id)a1;
+ (id)jsonOCRTextLinesFromDocumentObservation:(id)a0;
+ (id)ocrTextLinesFromDocumentObservation:(id)a0;

@end
