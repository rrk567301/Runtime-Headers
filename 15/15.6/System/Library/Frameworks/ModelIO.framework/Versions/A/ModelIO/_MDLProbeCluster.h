@class NSMutableSet;

@interface _MDLProbeCluster : NSObject

@property void /* unknown type, empty encoding */ centroid;
@property (retain) NSMutableSet *probes;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEmpty;
- (void)calculateCentroidNotIncludingSamplesinArray:(id)a0;
- (char)isEqualToCluster:(id)a0;

@end
