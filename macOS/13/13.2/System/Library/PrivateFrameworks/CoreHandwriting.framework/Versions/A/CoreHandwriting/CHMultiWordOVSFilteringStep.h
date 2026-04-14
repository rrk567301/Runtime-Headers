@class CHStringOVSChecker;

@interface CHMultiWordOVSFilteringStep : CHPostprocessingStep

@property (retain, nonatomic) CHStringOVSChecker *ovsStringChecker;

- (void).cxx_destruct;
- (id)process:(id)a0 options:(id)a1;
- (id)initWithOVSStringChecker:(id)a0;

@end
