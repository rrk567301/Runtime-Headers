@class FI_IPropertyValueController, FI_IPropertyValueExtractor;

@interface FI_TPropertyAsyncExtractionOperation : NSOperation {
    struct TNSWeakPtr<FI_IPropertyValueController> { FI_IPropertyValueController *fWeakObject; } _viewController;
    FI_IPropertyValueExtractor *_valueExtractor;
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct TFENode *__cap_; } _nodes;
}

- (void)main;
- (id)description;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const void *)nodes;
- (BOOL)isForSameNodes:(const void *)a0;
- (id)initWithNodes:(const void *)a0 controller:(id)a1;

@end
