@class NSColor;

@interface NSBoxAuxiliary : NSObject {
    double borderWidth;
    double cornerRadius;
}

@property (copy) NSColor *borderColor;
@property (copy) NSColor *fillColor;

- (id)init;
- (void).cxx_destruct;

@end
