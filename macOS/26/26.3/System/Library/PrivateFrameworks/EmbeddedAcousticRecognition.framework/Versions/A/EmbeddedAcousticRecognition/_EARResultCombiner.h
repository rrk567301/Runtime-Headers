@interface _EARResultCombiner : NSObject {
    struct unique_ptr<quasar::ResultCombiner, std::default_delete<quasar::ResultCombiner>> { struct { struct ResultCombiner *__ptr_; } ; } _combiner;
}

+ (void)initialize;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)combinedResultWithSystemResults:(id)a0;

@end
