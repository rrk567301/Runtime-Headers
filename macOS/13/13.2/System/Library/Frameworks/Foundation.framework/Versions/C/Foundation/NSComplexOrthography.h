@class NSString, NSDictionary;

@interface NSComplexOrthography : NSOrthography {
    NSString *_dominantScript;
    NSDictionary *_languageMap;
    unsigned int _orthographyFlags;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithDominantScript:(id)a0 languageMap:(id)a1;
- (id)dominantScript;
- (id)languageMap;
- (unsigned int)orthographyFlags;

@end
