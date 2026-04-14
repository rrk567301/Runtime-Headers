@class NSString;

@interface SwiftUI.AppKitTextField : NSTextField {
    void /* unknown type, empty encoding */ cachedIdealWidth;
    void /* unknown type, empty encoding */ upperLimit;
    void /* unknown type, empty encoding */ lowerLimit;
    void /* unknown type, empty encoding */ delegateFocusEffect;
}

@property (class, nonatomic) Class cellClass;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)designatedFocusRingView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
