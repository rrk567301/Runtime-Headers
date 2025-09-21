@interface AXMBarcodeNode : AXMEvaluationNode <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

+ (id)title;
+ (char)isSupported;

@end
