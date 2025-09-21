@class NSArray, NSDictionary, NSSet, NSLocale, NSCharacterSet, NSString;

@interface CHRemoteTextRecognizer : CHRemoteRecognizer <CHRecognizingText> {
    BOOL _shouldUseStrokeReordering;
}

@property (readonly, copy, nonatomic) NSArray *locales;
@property (readonly, copy, nonatomic) NSDictionary *activeCharacterSetPerLocale;
@property (nonatomic) BOOL shouldUseTextReplacements;
@property (copy, nonatomic) NSSet *declaredVariables;
@property (readonly, nonatomic) int recognitionMode;
@property (nonatomic) int contentType;
@property (nonatomic) int autoCapitalizationMode;
@property (nonatomic) int autoCorrectionMode;
@property (nonatomic) int baseWritingDirection;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSCharacterSet *activeCharacterSet;
@property (readonly, nonatomic) BOOL enableGen2ModelIfAvailable;
@property (readonly, nonatomic) BOOL enableGen2CharacterLMIfAvailable;
@property (nonatomic) unsigned long long maxRecognitionResultCount;
@property (nonatomic) struct CGSize { double x0; double x1; } minimumDrawingSize;
@property (readonly, nonatomic) BOOL enableCachingIfAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)maxRequestStrokeCountForLocale:(id)a0;
+ (id)newRemoteRecognizerWithMode:(int)a0 locales:(id)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMode:(int)a0 locale:(id)a1;
- (id)initWithMode:(int)a0 locale:(id)a1 recognizerOptions:(id)a2;
- (id)initWithMode:(int)a0 locales:(id)a1 activeCharacterSetPerLocale:(id)a2 recognizerOptions:(id)a3;
- (BOOL)isEqualToRemoteTextRecognizer:(id)a0;
- (id)textRecognitionResultForDrawing:(id)a0 options:(id)a1 error:(id *)a2;
- (id)textRecognitionResultForDrawing:(id)a0 options:(id)a1 principalPoints:(id *)a2 error:(id *)a3;
- (id)transcriptionPathsForTokenizedTextResult:(id)a0 withHistory:(id)a1 scores:(id *)a2 error:(id *)a3;

@end
