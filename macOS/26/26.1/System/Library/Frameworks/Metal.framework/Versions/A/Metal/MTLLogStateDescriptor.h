@interface MTLLogStateDescriptor : NSObject <NSCopying>

@property long long level;
@property long long bufferSize;

- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
