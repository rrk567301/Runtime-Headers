@class NSString;

@interface SwiftUI.AccessibilityAttachmentsPlaceholder : NSObject <RBPlaceholderStyle> {
    void /* unknown type, empty encoding */ attachments;
}

@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForContent:(id)a0;
- (void)drawInState:(const void *)a0 content:(id)a1;
- (id)encodedDataWithDelegate:(id)a0 error:(id *)a1;

@end
