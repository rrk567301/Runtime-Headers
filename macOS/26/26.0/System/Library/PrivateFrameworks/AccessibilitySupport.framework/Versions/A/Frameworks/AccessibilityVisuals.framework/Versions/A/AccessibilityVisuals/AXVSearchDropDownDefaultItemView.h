@class NSImageView, NSTextField, NSImage, NSTrackingArea, NSString, NSObject;
@protocol AXVSearchDropDownItemProtocol, AXVSearchDropDownItemMouseDelegate;

@interface AXVSearchDropDownDefaultItemView : NSStackView <AXVSearchDropDownItemViewProtocol>

@property (retain, nonatomic) NSImageView *_iconImageView;
@property (retain, nonatomic) NSTextField *_labelTextField;
@property (retain, nonatomic) NSTextField *_detailsTextField;
@property (retain, nonatomic) NSTrackingArea *_trackingArea;
@property (retain, nonatomic) NSImage *itemViewIcon;
@property (retain, nonatomic) NSString *itemViewLabel;
@property (retain, nonatomic) NSString *itemViewDetails;
@property (retain, nonatomic) NSObject<AXVSearchDropDownItemProtocol> *itemViewItem;
@property (weak, nonatomic) id<AXVSearchDropDownItemMouseDelegate> itemViewMouseDelegate;
@property (nonatomic) BOOL itemViewSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mouseDown:(id)a0;
- (void)dealloc;
- (void)updateTrackingAreas;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)rightMouseDown:(id)a0;
- (id)initWithDropDownItem:(id)a0;

@end
