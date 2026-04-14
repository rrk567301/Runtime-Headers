@class NSString, NSMutableArray;

@interface RKText : NSObject

@property (retain) NSString *string;
@property (retain) NSString *languageID;
@property double trainingWeight;
@property BOOL trainVerbatim;
@property (retain) NSMutableArray *annotations;
@property (retain) NSString *processedText;

+ (void)initialize;
+ (id)annotationNameFromType:(unsigned long long)a0;
+ (id)defaultDataProvider;
+ (unsigned long long)annotationTypeFromName:(id)a0;
+ (id)polarityNameFromType:(unsigned long long)a0;
+ (unsigned long long)polarityTypeFromName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithString:(id)a0 andLanguageIdentifier:(id)a1;
- (void)annotateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 type:(unsigned long long)a1;
- (void)enumerateAnnotationsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (id)initWithString:(id)a0 andLanguageIdentifier:(id)a1 trainingWeight:(double)a2 trainVerbatim:(BOOL)a3;
- (void)annotateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 type:(unsigned long long)a1 machineGenerated:(BOOL)a2;
- (id)taggedText;
- (id)subTextWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)cleanupData;
- (id)subTextsByPolarity;
- (unsigned long long)annotatedPolarity;
- (id)lsmText;

@end
