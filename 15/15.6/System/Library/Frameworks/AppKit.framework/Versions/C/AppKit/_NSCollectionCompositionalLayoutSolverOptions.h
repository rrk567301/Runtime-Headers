@class NSArray;

@interface _NSCollectionCompositionalLayoutSolverOptions : NSObject

@property (nonatomic) double interSectionSpacing;
@property (retain, nonatomic) Class layoutAttributesClass;
@property (retain, nonatomic) Class invalidationContextClass;
@property (nonatomic) char layoutRTL;
@property (nonatomic) char roundsToScreenScale;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSArray *globalSupplementaryItems;
@property (copy, nonatomic) id /* block */ decorationRegistrationHandler;

+ (id)defaultOptions;

- (void).cxx_destruct;

@end
