@class NSValue, FI_IPropertyValueExtractor;

@interface FI_TPropertyAsyncExtractionOperation : NSOperation {
    struct TNSWeakPtr<FI_IPropertyValueController, void> { NSValue *fWeakObject; } _viewController;
    FI_IPropertyValueExtractor *_valueExtractor;
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } _nodes;
}

- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)main;
- (const void *)nodes;
- (id)initWithNodes:(const void *)a0 controller:(id)a1;
- (BOOL)isForSameNodes:(const void *)a0;

@end
