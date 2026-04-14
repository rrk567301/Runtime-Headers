@class NSMutableSet;

@interface _MDLProbeCluster : NSObject

@property void /* unknown type, empty encoding */ centroid;
@property (retain) NSMutableSet *probes;

- (BOOL)isEmpty;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToCluster:(id)a0;
- (void)calculateCentroidNotIncludingSamplesinArray:(id)a0;

@end
