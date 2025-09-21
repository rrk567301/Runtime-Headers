@class NSArray;

@interface AVAnnotationPathRepresentation : AVAnnotationRepresentation {
    struct CGColor { } *_strokeColor;
}

@property (copy, nonatomic) NSArray *paths;
@property (nonatomic) struct CGColor { } *strokeColor;
@property (nonatomic) long long strokeWidth;
@property (nonatomic) char dashed;
@property (nonatomic) char hasShadow;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)_initWithPropertyList:(id)a0 binaryData:(id)a1;
- (id)_propertyListAndBinaryData:(id *)a0;
- (id)initWithPaths:(id)a0;

@end
