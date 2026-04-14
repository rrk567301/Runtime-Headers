@class NSMutableSet;

@interface _MDLProbeCluster : NSObject

@property void /* unknown type, empty encoding */ centroid;
@property (retain) NSMutableSet *probes;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (void)calculateCentroidNotIncludingSamplesinArray:(id)a0;
- (BOOL)isEqualToCluster:(id)a0;

@end
