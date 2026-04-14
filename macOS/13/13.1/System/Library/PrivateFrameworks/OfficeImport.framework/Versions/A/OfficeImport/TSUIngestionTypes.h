@interface TSUIngestionTypes : NSObject

+ (id)supportedImageTypes;
+ (id)supportedMovieTypes;
+ (id)supportedRichTextTypes;
+ (BOOL)isValidPlainTextUTI:(id)a0;
+ (id)p_supportedPlainTextTypes;
+ (id)p_unsupportedPlainTextTypes;
+ (id)highEfficiencyImageTypes;

@end
