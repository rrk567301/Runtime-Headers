@class NSMutableSet;

@interface _MDLProbeCluster : NSObject

@property void /* unknown type, empty encoding */ centroid;
@property (retain) NSMutableSet *probes;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (BOOL)isEqualToCluster:(id)a0;
- (void)calculateCentroidNotIncludingSamplesinArray:(id)a0;

@end
