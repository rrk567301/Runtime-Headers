@class NSString, NSData;

@interface MPSGraphViewerNodePropertyStringSPI : MPSGraphObject <MPSGraphViewerNodePropertySPI> {
    NSData *_stringUTF8Data;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *stringValue;

+ (id)type;

- (id)shape;
- (unsigned long long)dataLength;
- (unsigned int)dataType;
- (BOOL)isEnum;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithName:(id)a0 value:(id)a1;
- (id)initWithJSONDictionary:(id)a0;
- (id)dataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isSplat;
- (id)enumCases;

@end
