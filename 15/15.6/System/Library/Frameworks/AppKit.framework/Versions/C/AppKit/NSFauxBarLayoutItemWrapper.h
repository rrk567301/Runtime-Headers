@class NSString, NSObject;
@protocol _NSTouchBarItemLayoutWrapper;

@interface NSFauxBarLayoutItemWrapper : NSObject <NSBarLayoutWrapper> {
    NSObject<_NSTouchBarItemLayoutWrapper> *_backingItem;
    char _isCentered;
}

@property (readonly) NSObject<_NSTouchBarItemLayoutWrapper> *backingItem;
@property (readonly) struct CGSize { double x0; double x1; } minSize;
@property (readonly) struct CGSize { double x0; double x1; } maxSize;
@property (readonly) char isSpace;
@property (readonly) long long priorityIndex;
@property (readonly) char wantsToBeCentered;
@property (readonly) struct CGSize { double x0; double x1; } preferredSize;
@property (readonly) struct CGSize { double x0; double x1; } contentClippingSize;
@property (readonly) struct CGSize { double x0; double x1; } compressedMinSize;
@property (readonly) unsigned long long itemPosition;
@property (readonly) double preferredZOrder;
@property (readonly) double preferredTrailingPosition;
@property (readonly) char participatesInOverflow;
@property (readonly) char isTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithBackingItem:(id)a0 isCentered:(char)a1;
- (struct CGSize { double x0; double x1; })sizeThatFitsProposedLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (double)additionalWidthRequiredForProposedLayoutSize:(struct CGSize { double x0; double x1; })a0;

@end
