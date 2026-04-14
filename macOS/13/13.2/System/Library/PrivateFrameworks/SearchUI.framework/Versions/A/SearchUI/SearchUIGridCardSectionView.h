@class NSString, TLKImagesView, NSMapTable;

@interface SearchUIGridCardSectionView : SearchUICardSectionView <TLKImagesViewDelegate>

@property (retain, nonatomic) TLKImagesView *contentView;
@property (copy, nonatomic) NSMapTable *imageToRowModelMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)imagesView:(id)a0 didSelectImage:(id)a1;
- (id)setupContentView;
- (void)updateWithRowModel:(id)a0;
- (id)imagesInGrid:(id)a0;

@end
