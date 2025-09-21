@class VKLabelMarker;

@interface VKLabelSelectionQuery : NSObject {
    struct shared_ptr<md::StandardLabelMarker> { struct StandardLabelMarker *__ptr_; struct __shared_weak_count *__cntrl_; } _labelMarker;
}

@property (readonly, nonatomic) struct shared_ptr<md::StandardLabelMarker> { struct StandardLabelMarker *x0; struct __shared_weak_count *x1; } standardLabelMarker;
@property (nonatomic) BOOL result;
@property (readonly, nonatomic) VKLabelMarker *labelMarker;
@property (readonly, nonatomic) unsigned int filterStamp;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithLabelMarker:(struct shared_ptr<md::StandardLabelMarker> { struct StandardLabelMarker *x0; struct __shared_weak_count *x1; })a0 selectionFilterStamp:(unsigned int)a1;

@end
