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
- (void).cxx_destruct;
- (id)initWithName:(id)a0 value:(id)a1;
- (BOOL)isEnum;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0;
- (id)dataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isSplat;
- (id)enumCases;

@end
