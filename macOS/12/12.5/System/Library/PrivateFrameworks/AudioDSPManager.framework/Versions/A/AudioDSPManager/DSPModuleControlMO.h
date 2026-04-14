@class NSString, NSSet, DSPModuleMO;

@interface DSPModuleControlMO : NSManagedObject

@property (nonatomic) BOOL isDefault;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) int virtualChannelCount;
@property (retain, nonatomic) NSSet *aggregation;
@property (retain, nonatomic) NSSet *contentDSP;
@property (retain, nonatomic) DSPModuleMO *module;

+ (id)fetchRequest;

@end
