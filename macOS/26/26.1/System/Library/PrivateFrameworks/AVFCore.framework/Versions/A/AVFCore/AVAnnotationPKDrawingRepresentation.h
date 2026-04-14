@class NSData;

@interface AVAnnotationPKDrawingRepresentation : AVAnnotationRepresentation

@property (copy, nonatomic) NSData *drawingData;

- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)_initWithPropertyList:(id)a0 binaryData:(id)a1;
- (id)_propertyListAndBinaryData:(id *)a0;
- (id)initWithDrawingData:(id)a0;

@end
