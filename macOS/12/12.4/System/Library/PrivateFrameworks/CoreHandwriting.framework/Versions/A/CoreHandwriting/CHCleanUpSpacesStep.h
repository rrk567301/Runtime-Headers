@class NSLocale;

@interface CHCleanUpSpacesStep : CHPostprocessingStep

@property (retain, nonatomic) NSLocale *locale;

- (void).cxx_destruct;
- (id)initWithLocale:(id)a0;
- (id)process:(id)a0 options:(id)a1;
- (id)cleanUpSpacesInToken:(id)a0 leftContext:(id)a1;

@end
