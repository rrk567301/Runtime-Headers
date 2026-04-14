@interface AggregatedDataWrapper : NSObject

@property (nonatomic) struct AggregatedData { struct vector<jpc::IIFABlock::IFAPearlJasperCorrespondence, std::allocator<jpc::IIFABlock::IFAPearlJasperCorrespondence>> { struct IFAPearlJasperCorrespondence *__begin_; struct IFAPearlJasperCorrespondence *__end_; struct IFAPearlJasperCorrespondence *__cap_; } pearlJasperCorrespondences; struct vector<jpc::IIFABlock::IFAPearlCorrespondence, std::allocator<jpc::IIFABlock::IFAPearlCorrespondence>> { struct IFAPearlCorrespondence *__begin_; struct IFAPearlCorrespondence *__end_; struct IFAPearlCorrespondence *__cap_; } pearlCorrespondences; } aggData;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setAggPoints:(struct AggregatedData { struct vector<jpc::IIFABlock::IFAPearlJasperCorrespondence, std::allocator<jpc::IIFABlock::IFAPearlJasperCorrespondence>> { struct IFAPearlJasperCorrespondence *x0; struct IFAPearlJasperCorrespondence *x1; struct IFAPearlJasperCorrespondence *x2; } x0; struct vector<jpc::IIFABlock::IFAPearlCorrespondence, std::allocator<jpc::IIFABlock::IFAPearlCorrespondence>> { struct IFAPearlCorrespondence *x0; struct IFAPearlCorrespondence *x1; struct IFAPearlCorrespondence *x2; } x1; })a0;

@end
