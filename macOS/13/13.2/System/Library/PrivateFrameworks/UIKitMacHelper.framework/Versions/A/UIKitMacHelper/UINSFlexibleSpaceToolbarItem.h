@class NSString, NSView;
@protocol UINSAccessibilityInfo;

@interface UINSFlexibleSpaceToolbarItem : UINSToolbarItem <UINSFlexibleSpaceToolbarItem> {
    NSView *_customSpace;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id<UINSAccessibilityInfo> accessibilityInfo;
@property (copy, nonatomic) NSString *label;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })minSize;
- (struct CGSize { double x0; double x1; })maxSize;
- (BOOL)isSpace;
- (BOOL)isSeparatorItem;
- (void)prepareItem;

@end
