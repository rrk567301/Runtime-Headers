@class CHStringOVSChecker;

@interface CHMultiWordOVSFilteringStep : CHPostprocessingStep

@property (nonatomic) CHStringOVSChecker *ovsStringChecker;

- (id)process:(id)a0 options:(id)a1;
- (id)initWithOVSStringChecker:(id)a0;

@end
