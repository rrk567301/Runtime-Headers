@class NSDictionary, NSData;

@interface AVAnnotationUnknownRepresentation : AVAnnotationRepresentation {
    NSDictionary *_properties;
    NSData *_binaryData;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (id)_initWithPropertyList:(id)a0 binaryData:(id)a1;
- (id)_propertyListAndBinaryData:(id *)a0;

@end
