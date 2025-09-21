@class NSString, NSButton;

@interface AMPDescriptionBlock : NSControl {
    void /* unknown type, empty encoding */ descMoreArea;
    void /* unknown type, empty encoding */ descMoreFade;
    void /* unknown type, empty encoding */ descMoreFill;
    void /* unknown type, empty encoding */ moreBtn;
    void /* unknown type, empty encoding */ descriptionObservation;
}

@property (nonatomic, copy) id objectValue;
@property (nonatomic, copy) NSString *stringValue;
@property (nonatomic) SEL action;
@property (nonatomic, retain) id target;
@property (nonatomic, readonly) NSButton *descriptionBtn;
@property (nonatomic) BOOL descriptionIsClipped;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setVerticalCompressionPriority:(float)a0 andHugging:(float)a1;

@end
