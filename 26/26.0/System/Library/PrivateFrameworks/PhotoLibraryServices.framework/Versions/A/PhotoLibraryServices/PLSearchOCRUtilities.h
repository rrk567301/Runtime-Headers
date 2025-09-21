@interface PLSearchOCRUtilities : NSObject

+ (id)spotlightTextLinesFromDocumentObservation:(id)a0;
+ (id)_wordsFromString:(id)a0 usingTokenizer:(id)a1;
+ (id)jsonOCRTextLinesFromDocumentObservation:(id)a0;
+ (id)ocrTextLinesFromDocumentObservation:(id)a0;
+ (id)_ocrTextLineCandidatesFromTextBlockObservation:(id)a0 tokenizer:(id)a1 allowLowConfidence:(BOOL)a2;
+ (id)_textFoundLine;
+ (id)_ocrTextLinesFromDocumentObservation:(id)a0 allowLowConfidence:(BOOL)a1;

@end
