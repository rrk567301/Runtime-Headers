@class NSString;

@interface AVAnnotationSVGRepresentation : AVAnnotationRepresentation

@property (copy, nonatomic) NSString *svg;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)_initWithPropertyList:(id)a0 binaryData:(id)a1;
- (id)_propertyListAndBinaryData:(id *)a0;
- (id)initWithSVG:(id)a0;

@end
