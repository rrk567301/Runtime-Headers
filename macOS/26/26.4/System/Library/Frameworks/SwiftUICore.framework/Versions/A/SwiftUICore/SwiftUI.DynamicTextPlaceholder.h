@class NSString;

@interface SwiftUI.DynamicTextPlaceholder : NSObject <RBPlaceholderDrawingOperation> {
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ size;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingRect;

- (void)drawInState:(const void *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)encodedDataWithDelegate:(id)a0 error:(id *)a1;

@end
