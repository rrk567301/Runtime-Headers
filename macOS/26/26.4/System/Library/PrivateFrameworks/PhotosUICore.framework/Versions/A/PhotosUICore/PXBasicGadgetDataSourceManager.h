@class NSArray;

@interface PXBasicGadgetDataSourceManager : PXGadgetDataSourceManager

@property (copy, nonatomic) NSArray *providers;

- (void).cxx_destruct;
- (id)initWithProviders:(id)a0;
- (id)gadgetProviders;

@end
