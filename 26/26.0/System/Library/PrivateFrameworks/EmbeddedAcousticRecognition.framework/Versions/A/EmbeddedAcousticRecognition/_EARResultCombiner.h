@interface _EARResultCombiner : NSObject {
    struct unique_ptr<quasar::ResultCombiner, std::default_delete<quasar::ResultCombiner>> { struct ResultCombiner *__ptr_; } _combiner;
}

+ (void)initialize;

- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)combinedResultWithSystemResults:(id)a0;

@end
