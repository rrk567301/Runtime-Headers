@class NSString, NSSet, DSPFlavorMO;

@interface DSPModuleMO : NSManagedObject

@property (nonatomic) BOOL hasAggregatedControl;
@property (nonatomic) long long scope;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSSet *aggregatedControl;
@property (retain, nonatomic) NSSet *controls;
@property (retain, nonatomic) DSPFlavorMO *dspFlavor;
@property (retain, nonatomic) NSSet *port;
@property (retain, nonatomic) NSSet *semantic;

+ (id)fetchRequest;

@end
