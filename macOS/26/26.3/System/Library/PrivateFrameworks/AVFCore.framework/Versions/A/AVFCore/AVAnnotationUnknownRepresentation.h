@class NSDictionary, NSData;

@interface AVAnnotationUnknownRepresentation : AVAnnotationRepresentation {
    NSDictionary *_properties;
    NSData *_binaryData;
}

- (id)description;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)_initWithPropertyList:(id)a0 binaryData:(id)a1;
- (id)_propertyListAndBinaryData:(id *)a0;

@end
