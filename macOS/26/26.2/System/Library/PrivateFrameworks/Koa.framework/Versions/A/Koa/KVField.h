@class NSString, NSData;

@interface KVField : NSObject <KVJSONEncodable> {
    NSData *_buffer;
    const struct Field { unsigned char x0[1]; } *_field;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fieldWithBuffer:(id)a0 root:(const void *)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)fieldType;
- (id)value;
- (id)init;
- (id)label;
- (id)JSONWithIndent:(unsigned char)a0;
- (BOOL)isEqualToField:(id)a0;
- (id)initWithBuffer:(id)a0 root:(const struct Field { unsigned char x0[1]; } *)a1;
- (long long)localeType;

@end
