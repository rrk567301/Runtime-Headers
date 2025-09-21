@class NSString, NSData;

@interface MPSGraphViewerNodePropertyStringSPI : MPSGraphObject <MPSGraphViewerNodePropertySPI> {
    NSData *_stringUTF8Data;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *stringValue;

+ (id)type;

- (id)shape;
- (id)jsonDictionary;
- (unsigned int)dataType;
- (unsigned long long)dataLength;
- (id)initWithName:(id)a0 value:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEnum;
- (id)initWithJSONDictionary:(id)a0;
- (id)dataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isSplat;
- (id)enumCases;

@end
