@class NSData, NSString;

@interface AVAnnotationImageRepresentation : AVAnnotationRepresentation

@property (copy, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSString *fileType;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (id)_initWithPropertyList:(id)a0 binaryData:(id)a1;
- (id)_propertyListAndBinaryData:(id *)a0;
- (id)initWithImageData:(id)a0 fileType:(id)a1;

@end
