@class MEByteSource;

@interface MEEstimatedSampleLocation : NSObject <NSCopying>

@property (readonly, nonatomic) struct { long long offset; long long length; } estimatedSampleLocation;
@property (readonly, nonatomic) struct { long long offset; long long length; } refinementDataLocation;
@property (readonly, retain, nonatomic) MEByteSource *byteSource;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithByteSource:(id)a0 estimatedSampleLocation:(struct { long long x0; long long x1; })a1 refinementDataLocation:(struct { long long x0; long long x1; })a2;

@end
