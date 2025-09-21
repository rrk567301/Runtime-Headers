@class NSString;

@interface PXEditorialSectionBodyLayout : PXDayAssetsSectionBodyLayout <PXPhotosSectionedLayoutBody>

@property (nonatomic) char disableClipping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)disableDebugAssertionForAnchorUpdatesWithZeroContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sectionRect;

@end
