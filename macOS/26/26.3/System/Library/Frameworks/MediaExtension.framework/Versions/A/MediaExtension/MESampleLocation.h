@class MEByteSource;

@interface MESampleLocation : NSObject <NSCopying>

@property (readonly, nonatomic) struct { long long offset; long long length; } sampleLocation;
@property (readonly, retain, nonatomic) MEByteSource *byteSource;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithByteSource:(id)a0 sampleLocation:(struct { long long x0; long long x1; })a1;

@end
