@class NSString, NSSet, DSPModuleMO;

@interface DSPModuleAggregatedControlMO : NSManagedObject

@property (nonatomic) BOOL isDefault;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int virtualChannelCount;
@property (retain, nonatomic) NSSet *control;
@property (retain, nonatomic) DSPModuleMO *module;

+ (id)fetchRequest;

@end
