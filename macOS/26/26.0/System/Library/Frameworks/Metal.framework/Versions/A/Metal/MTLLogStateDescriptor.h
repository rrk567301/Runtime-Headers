@interface MTLLogStateDescriptor : NSObject <NSCopying>

@property long long level;
@property long long bufferSize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
