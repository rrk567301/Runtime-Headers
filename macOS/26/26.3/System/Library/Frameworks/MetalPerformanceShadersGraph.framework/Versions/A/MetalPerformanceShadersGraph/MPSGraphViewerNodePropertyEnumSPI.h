@class NSString, NSArray;

@interface MPSGraphViewerNodePropertyEnumSPI : MPSGraphObject <MPSGraphViewerNodePropertySPI>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *enumType;
@property (readonly, nonatomic) NSArray *enumCases;
@property (readonly, nonatomic) unsigned long long enumValue;

+ (id)type;

- (id)shape;
- (unsigned long long)dataLength;
- (unsigned int)dataType;
- (void).cxx_destruct;
- (BOOL)isEnum;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0;
- (id)dataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isSplat;
- (id)initWithName:(id)a0 type:(id)a1 cases:(id)a2 value:(unsigned long long)a3;

@end
