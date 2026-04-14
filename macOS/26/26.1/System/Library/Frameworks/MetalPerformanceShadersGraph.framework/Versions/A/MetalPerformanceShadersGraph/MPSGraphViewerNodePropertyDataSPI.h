@class NSString, NSArray, NSData;

@interface MPSGraphViewerNodePropertyDataSPI : MPSGraphObject <MPSGraphViewerNodePropertySPI> {
    BOOL _isSplat;
    NSData *_raw;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int dataType;
@property (readonly, nonatomic) NSArray *shape;

+ (id)type;

- (void)setValue:(id)a0;
- (id)jsonDictionary;
- (BOOL)isEnum;
- (void).cxx_destruct;
- (unsigned long long)dataLength;
- (id)initWithJSONDictionary:(id)a0;
- (id)dataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isSplat;
- (id)enumCases;
- (id)initWithName:(id)a0 dataType:(unsigned int)a1 shape:(id)a2;
- (void)setSplatValue:(id)a0;

@end
