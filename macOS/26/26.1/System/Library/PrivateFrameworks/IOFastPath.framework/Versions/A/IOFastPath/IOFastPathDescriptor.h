@class NSDictionary;

@interface IOFastPathDescriptor : NSObject {
    NSDictionary *fields;
    unsigned long long sampleSize;
}

+ (id)descriptorWithData:(id)a0;
+ (id)descriptorWithFields:(id)a0;
+ (id)descriptorWithProperty:(void *)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)serialize;
- (id)initWithFields:(id)a0;
- (id)getSupportedFields;

@end
