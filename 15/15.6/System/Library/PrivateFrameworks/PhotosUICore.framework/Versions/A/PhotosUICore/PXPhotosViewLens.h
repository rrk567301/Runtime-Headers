@class NSString;

@interface PXPhotosViewLens : NSObject <NSCopying, PXPhotosLensControlItem>

@property (class, readonly, nonatomic) PXPhotosViewLens *zoomableGrid;
@property (class, readonly, nonatomic) PXPhotosViewLens *grid;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) long long defaultSectionBodyStyle;
@property (readonly, nonatomic) char wantsCuration;
@property (readonly, nonatomic) long long curationLength;
@property (readonly, nonatomic) char isDefaultCurationLength;
@property (readonly, nonatomic) char allowsActionMenu;
@property (readonly, nonatomic) char allowsBlur;
@property (readonly, nonatomic) char allowsScrollSnap;
@property (readonly, nonatomic) char ignoresTopSafeAreaInset;
@property (readonly, nonatomic) char allowsFooter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lensForCurationLength:(long long)a0 isDefault:(char)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)allowsActionType:(id)a0;
- (id)initWithTitle:(id)a0 symbolName:(id)a1 defaultSectionBodyStyle:(long long)a2;

@end
