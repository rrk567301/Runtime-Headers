@class NSSet;

@interface UAFInstrumentationAlterSetData : NSObject

@property (copy, nonatomic) NSSet *addedSpecifiers;
@property (copy, nonatomic) NSSet *removedSelectors;
@property (nonatomic) unsigned long long sourceType;

- (void).cxx_destruct;

@end
