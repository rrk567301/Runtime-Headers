@interface CPKCategoryButton : NSButton

@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic) unsigned long long iconIndex;
@property (nonatomic) BOOL selected;

+ (id)categoryButtonWithSizeBoundedToImage:(id)a0;

- (BOOL)isFlipped;
- (void)mouseUp:(id)a0;

@end
