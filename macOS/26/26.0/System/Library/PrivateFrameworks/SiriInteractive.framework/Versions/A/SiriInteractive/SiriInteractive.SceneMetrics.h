@interface SiriInteractive.SceneMetrics : NSObject <NSSecureCoding, BSXPCCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) double cornerRadius;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithCoder:(id)a0;

@end
