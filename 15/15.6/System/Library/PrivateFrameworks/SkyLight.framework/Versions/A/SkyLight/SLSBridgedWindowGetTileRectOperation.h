@interface SLSBridgedWindowGetTileRectOperation : SLSSynchronousBridgedWindowManagementOperation

@property (readonly) unsigned int windowID;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWindowID:(unsigned int)a0;
- (id)invokeFallback;
- (id)makeResultWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
