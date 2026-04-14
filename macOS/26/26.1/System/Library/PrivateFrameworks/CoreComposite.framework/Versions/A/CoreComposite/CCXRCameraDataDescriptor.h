@class NSArray;

@interface CCXRCameraDataDescriptor : CCDataDescriptor

@property (retain, nonatomic) NSArray *viewports;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)acceptVisitor:(id)a0;

@end
