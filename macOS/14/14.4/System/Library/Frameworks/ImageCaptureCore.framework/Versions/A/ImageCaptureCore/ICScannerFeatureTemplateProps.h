@class NSArray, ICScannerFunctionalUnit;

@interface ICScannerFeatureTemplateProps : NSObject

@property int numberOfTargets;
@property (retain) NSArray *targets;
@property ICScannerFunctionalUnit *fu;

- (void)dealloc;

@end
