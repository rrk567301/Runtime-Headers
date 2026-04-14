@interface MTLLogStateDescriptor : NSObject <NSCopying>

@property long long level;
@property long long bufferSize;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
