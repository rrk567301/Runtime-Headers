@class NSSet;

@interface UAFInstrumentationAlterSetData : NSObject

@property (copy, nonatomic) NSSet *addedSpecifiers;
@property (copy, nonatomic) NSSet *removedSelectors;

- (void).cxx_destruct;

@end
