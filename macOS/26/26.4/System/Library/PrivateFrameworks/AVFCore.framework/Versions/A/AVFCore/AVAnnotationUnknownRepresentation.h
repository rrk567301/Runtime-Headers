@class NSDictionary, NSData;

@interface AVAnnotationUnknownRepresentation : AVAnnotationRepresentation {
    NSDictionary *_properties;
    NSData *_binaryData;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)_initWithPropertyList:(id)a0 binaryData:(id)a1;
- (id)_propertyListAndBinaryData:(id *)a0;

@end
