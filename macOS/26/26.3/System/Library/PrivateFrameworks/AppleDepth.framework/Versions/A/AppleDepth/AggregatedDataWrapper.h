@interface AggregatedDataWrapper : NSObject

@property (nonatomic) struct AggregatedData { struct vector<jpc::IIFABlock::IFAPearlJasperCorrespondence, std::allocator<jpc::IIFABlock::IFAPearlJasperCorrespondence>> { struct IFAPearlJasperCorrespondence *__begin_; struct IFAPearlJasperCorrespondence *__end_; struct { struct IFAPearlJasperCorrespondence *__cap_; } ; } pearlJasperCorrespondences; struct vector<jpc::IIFABlock::IFAPearlCorrespondence, std::allocator<jpc::IIFABlock::IFAPearlCorrespondence>> { struct IFAPearlCorrespondence *__begin_; struct IFAPearlCorrespondence *__end_; struct { struct IFAPearlCorrespondence *__cap_; } ; } pearlCorrespondences; } aggData;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setAggPoints:(struct AggregatedData { struct vector<jpc::IIFABlock::IFAPearlJasperCorrespondence, std::allocator<jpc::IIFABlock::IFAPearlJasperCorrespondence>> { struct IFAPearlJasperCorrespondence *x0; struct IFAPearlJasperCorrespondence *x1; struct { struct IFAPearlJasperCorrespondence *x0; } x2; } x0; struct vector<jpc::IIFABlock::IFAPearlCorrespondence, std::allocator<jpc::IIFABlock::IFAPearlCorrespondence>> { struct IFAPearlCorrespondence *x0; struct IFAPearlCorrespondence *x1; struct { struct IFAPearlCorrespondence *x0; } x2; } x1; })a0;

@end
