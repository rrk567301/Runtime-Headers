@class NSArray;

@interface AVAnnotationPathRepresentation : AVAnnotationRepresentation {
    struct CGColor { } *_strokeColor;
}

@property (copy, nonatomic) NSArray *paths;
@property (nonatomic) struct CGColor { } *strokeColor;
@property (nonatomic) long long strokeWidth;
@property (nonatomic) BOOL dashed;
@property (nonatomic) BOOL hasShadow;

- (id)initWithPaths:(id)a0;
- (id)description;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)_initWithPropertyList:(id)a0 binaryData:(id)a1;
- (id)_propertyListAndBinaryData:(id *)a0;

@end
