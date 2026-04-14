@interface TSUIngestionTypes : NSObject

+ (id)p_unsupportedPlainTextTypes;
+ (id)p_supportedPlainTextTypes;
+ (id)supportedImageTypes;
+ (id)supportedMovieTypes;
+ (id)supportedRichTextTypes;
+ (BOOL)isValidPlainTextUTI:(id)a0;
+ (id)highEfficiencyImageTypes;

@end
