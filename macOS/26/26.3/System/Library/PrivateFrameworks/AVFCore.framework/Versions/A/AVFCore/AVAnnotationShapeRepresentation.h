@class NSString;

@interface AVAnnotationShapeRepresentation : AVAnnotationRepresentation {
    struct CGColor { } *_strokeColor;
}

@property (copy, nonatomic) NSString *shape;
@property (nonatomic) struct CGColor { } *strokeColor;
@property (nonatomic) long long strokeWidth;
@property (nonatomic) BOOL dashed;
@property (nonatomic) BOOL hasShadow;

- (id)description;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithShape:(id)a0;
- (unsigned long long)hash;
- (id)_initWithPropertyList:(id)a0 binaryData:(id)a1;
- (id)_propertyListAndBinaryData:(id *)a0;

@end
