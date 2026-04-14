@interface FI_TTagsImageView : FI_TImageView {
    struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; int *__cap_; } _tags;
}

@property (nonatomic) long long backgroundStyle;
@property (nonatomic, getter=isDimmed) BOOL dimmed;
@property (nonatomic, getter=isInBatchUpdate) BOOL inBatchUpdate;

- (struct vector<int, std::allocator<int>> { int *x0; int *x1; int *x2; })tags;
- (BOOL)isSelected;
- (void)setTags:(const void *)a0;
- (id).cxx_construct;
- (void)initCommon;
- (void).cxx_destruct;
- (void)updateTagsImage;

@end
