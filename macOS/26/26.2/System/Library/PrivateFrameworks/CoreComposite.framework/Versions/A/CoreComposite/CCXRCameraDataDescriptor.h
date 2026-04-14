@class NSArray;

@interface CCXRCameraDataDescriptor : CCDataDescriptor

@property (retain, nonatomic) NSArray *viewports;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)acceptVisitor:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
