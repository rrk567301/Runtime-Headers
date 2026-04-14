@class NSString, NSSet;

@interface DSPFlavorMO : NSManagedObject

@property (copy, nonatomic) NSString *dspFlavor;
@property (retain, nonatomic) NSSet *contentDSP;
@property (retain, nonatomic) NSSet *dspModule;
@property (retain, nonatomic) NSSet *hwDSP;
@property (retain, nonatomic) NSSet *semantic;

+ (id)fetchRequest;

@end
