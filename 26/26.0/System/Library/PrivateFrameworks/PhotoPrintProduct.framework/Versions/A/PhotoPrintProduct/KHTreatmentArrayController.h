@class NSString, KHTreatment;

@interface KHTreatmentArrayController : NSObject

@property (retain, nonatomic) NSString *title;
@property (weak, nonatomic) KHTreatment *selectedTreatment;
@property (nonatomic) unsigned long long selectedIndex;
@property (readonly, nonatomic) unsigned long long thumbnailType;

- (id)treatmentAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)numberOfTreatments;

@end
