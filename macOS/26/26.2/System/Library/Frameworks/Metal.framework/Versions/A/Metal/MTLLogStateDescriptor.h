@interface MTLLogStateDescriptor : NSObject <NSCopying>

@property long long level;
@property long long bufferSize;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
