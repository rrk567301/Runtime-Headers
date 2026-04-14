@class NSOrderedSet;

@interface CRMultiLocaleRecognizerConfiguration : CRRecognizerConfiguration

@property (readonly) NSOrderedSet *languages;

- (void).cxx_destruct;
- (id)initV3DefaultConfigWithOptions:(id)a0;
- (id)initV2DefaultConfigWithOptions:(id)a0;
- (id)initWithImageReaderOptions:(id)a0 error:(id *)a1;
- (id)textFeatureFilter;

@end
