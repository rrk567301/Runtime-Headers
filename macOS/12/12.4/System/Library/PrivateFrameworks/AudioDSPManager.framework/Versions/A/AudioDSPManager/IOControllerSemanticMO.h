@class NSString, NSSet, IOControllerConfigurationMO, DSPFlavorMO;

@interface IOControllerSemanticMO : NSManagedObject

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *mode;
@property (retain, nonatomic) IOControllerConfigurationMO *configuration;
@property (retain, nonatomic) NSSet *contentDSP;
@property (retain, nonatomic) DSPFlavorMO *dspFlavor;
@property (retain, nonatomic) NSSet *dspModule;
@property (retain, nonatomic) NSSet *format;

+ (id)fetchRequest;

@end
