@class NSArray, KHLayout;

@interface KHLayoutTreatmentController : KHTreatmentArrayController {
    NSArray *_treatments;
}

@property (readonly, nonatomic) NSArray *treatments;
@property (readonly, nonatomic) KHLayout *layout;
@property (readonly, nonatomic) NSArray *themeConfigurations;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)selectedIndex;
- (id)treatmentAtIndex:(unsigned long long)a0;
- (unsigned long long)thumbnailType;
- (id)supportedTreatments:(BOOL)a0;
- (void)setSelectedTreatment:(id)a0;
- (unsigned long long)numberOfTreatments;
- (id)initWithLayout:(id)a0 themeConfigurations:(id)a1;

@end
