@interface CHRemoteRecognitionSketchRequest : CHRemoteRecognitionRequest

+ (char)supportsSecureCoding;
+ (id)loadFromFile:(id)a0;

- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDrawing:(id)a0 options:(id)a1 priority:(long long)a2;
- (char)isEqualToRemoteRecognitionSketchRequest:(id)a0;

@end
