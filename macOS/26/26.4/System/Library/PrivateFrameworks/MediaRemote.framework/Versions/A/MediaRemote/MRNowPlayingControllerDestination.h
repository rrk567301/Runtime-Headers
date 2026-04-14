@class MRPlayerPath;

@interface MRNowPlayingControllerDestination : MRDestination

@property (retain, nonatomic) MRPlayerPath *unresolvedPlayerPath;
@property (retain, nonatomic) MRPlayerPath *resolvedPlayerPath;
@property (nonatomic) BOOL isEndpointSet;

- (void)setEndpoint:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;

@end
