@interface _EARASRTaggerElectra : NSObject {
    struct unique_ptr<quasar::ASRTaggerElectra, std::default_delete<quasar::ASRTaggerElectra>> { struct { struct ASRTaggerElectra *__ptr_; } ; } taggerElectra;
}

- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)earTagLabel:(int)a0;
- (id)tagEntitiesWithTagNamesIn:(id)a0;

@end
