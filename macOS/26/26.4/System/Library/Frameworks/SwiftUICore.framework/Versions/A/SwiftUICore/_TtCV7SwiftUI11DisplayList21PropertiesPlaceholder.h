@class NSString;

@interface _TtCV7SwiftUI11DisplayList21PropertiesPlaceholder : NSObject <RBPlaceholderStyle> {
    void /* unknown type, empty encoding */ properties;
}

@property (nonatomic, readonly) NSString *identifier;

- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForContent:(id)a0;
- (void)drawInState:(const void *)a0 content:(id)a1;
- (id)encodedDataWithDelegate:(id)a0 error:(id *)a1;

@end
