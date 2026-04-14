@class NSNumber;

@interface WKSnapshotConfiguration : NSObject <NSCopying> {
    BOOL _includesSelectionHighlighting;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (copy, nonatomic) NSNumber *snapshotWidth;
@property (nonatomic) BOOL afterScreenUpdates;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)_includesSelectionHighlighting;
- (void)_setIncludesSelectionHighlighting:(BOOL)a0;

@end
