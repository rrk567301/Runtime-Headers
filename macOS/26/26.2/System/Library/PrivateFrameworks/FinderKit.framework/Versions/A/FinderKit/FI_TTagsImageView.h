@interface FI_TTagsImageView : FI_TImageView {
    struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; struct { int *__cap_; } ; } _tags;
}

@property (nonatomic) long long backgroundStyle;
@property (nonatomic, getter=isDimmed) BOOL dimmed;
@property (nonatomic, getter=isInBatchUpdate) BOOL inBatchUpdate;

- (BOOL)isSelected;
- (struct vector<int, std::allocator<int>> { int *x0; int *x1; struct { int *x0; } x2; })tags;
- (void)initCommon;
- (void)setTags:(const void *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)updateTagsImage;

@end
