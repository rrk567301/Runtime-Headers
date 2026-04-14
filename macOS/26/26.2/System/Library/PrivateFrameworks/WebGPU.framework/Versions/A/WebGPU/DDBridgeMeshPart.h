@interface DDBridgeMeshPart : NSObject

@property (nonatomic, readonly) unsigned long long indexOffset;
@property (nonatomic, readonly) unsigned long long indexCount;
@property (nonatomic, readonly) unsigned long long topology;
@property (nonatomic, readonly) unsigned long long materialIndex;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ boundsMin;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ boundsMax;

- (id)init;
- (id)initWithIndexOffset:(id)a0 indexCount:(SEL)a1 topology:(unsigned long long)a2 materialIndex:(unsigned long long)a3 boundsMin:(unsigned long long)a4 boundsMax:(unsigned long long)a5;

@end
