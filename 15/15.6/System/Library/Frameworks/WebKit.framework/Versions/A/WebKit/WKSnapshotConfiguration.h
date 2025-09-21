@class NSNumber;

@interface WKSnapshotConfiguration : NSObject <NSCopying> {
    char _includesSelectionHighlighting;
    char _usesContentsRect;
    char _usesTransparentBackground;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (copy, nonatomic) NSNumber *snapshotWidth;
@property (nonatomic) char afterScreenUpdates;

+ (char)accessInstanceVariablesDirectly;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)_includesSelectionHighlighting;
- (void)_setIncludesSelectionHighlighting:(char)a0;
- (void)_setUsesContentsRect:(char)a0;
- (void)_setUsesTransparentBackground:(char)a0;
- (char)_usesContentsRect;
- (char)_usesTransparentBackground;

@end
