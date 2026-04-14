@class NSView, NSString;

@interface SwiftUI.AppKitTouchBarItem : NSTouchBarItem {
    void /* unknown type, empty encoding */ itemContent;
    void /* unknown type, empty encoding */ hostView;
}

@property (nonatomic, readonly) NSView *view;
@property (nonatomic, readonly) NSString *customizationLabel;

- (id)initWithIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
