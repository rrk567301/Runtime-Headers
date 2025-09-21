@class NSTouchBarItem, NSCompressionGroupLayout, NSView;

@interface _NSFunctionRowCustomizationDFRItem : NSObject {
    NSView *_itemView;
    struct CGSize { double width; double height; } _minSize;
    struct CGSize { double width; double height; } _preferredSize;
    struct CGSize { double width; double height; } _maxSize;
    char _hasCachedMinMaxSize;
}

@property (retain) NSCompressionGroupLayout *compressionLayout;
@property (readonly) NSTouchBarItem *representedItem;
@property long long section;
@property (readonly) NSView *itemView;
@property (readonly) struct CGSize { double x0; double x1; } minSize;
@property (readonly) struct CGSize { double x0; double x1; } maxSize;
@property (readonly) struct CGSize { double x0; double x1; } preferredSize;
@property (readonly) struct CGSize { double width; double height; } reducedMetricsThreshold;
@property (readonly) struct CGSize { double x0; double x1; } contentClippingSize;
@property char requiresExactMinSize;
@property char forcesReducedMetricsCompression;
@property char requiresTrueCenterLayout;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)invalidateSizes;
- (void)_updateMinMaxSizeIfNeeded;
- (char)isCenteredInTree:(id)a0;

@end
