@class NSView, QTHUDGroupView;

@interface QTHUDGroupViewItem : NSObject <NSCoding> {
    NSView *_view;
    QTHUDGroupView *_groupView;
    struct CGSize { double width; double height; } _minSize;
    struct CGSize { double width; double height; } _maxSize;
    void *_observationInfo;
    struct { unsigned char hidden : 1; unsigned int reserved : 31; } _flags;
    double _margins[4];
}

+ (void)initialize;
+ (char)automaticallyNotifiesObserversOfHidden;
+ (char)automaticallyNotifiesObserversOfView;
+ (char)automaticallyNotifiesObserversOfGroupView;
+ (char)automaticallyNotifiesObserversOfMaxSize;
+ (char)automaticallyNotifiesObserversOfMinSize;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isHidden;
- (void)setHidden:(char)a0;
- (void)setObservationInfo:(void *)a0;
- (id)view;
- (void *)observationInfo;
- (void)setView:(id)a0;
- (struct CGSize { double x0; double x1; })maxSize;
- (struct CGSize { double x0; double x1; })minSize;
- (void)setMaxSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMinSize:(struct CGSize { double x0; double x1; })a0;
- (id)groupView;
- (void)setGroupView:(id)a0;

@end
