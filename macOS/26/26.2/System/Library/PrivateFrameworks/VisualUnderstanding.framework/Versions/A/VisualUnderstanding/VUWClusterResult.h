@class NSNumber;

@interface VUWClusterResult : NSObject

@property (nonatomic, retain) NSNumber *observationIdentifier;
@property (nonatomic, retain) NSNumber *clusterIdentifier;
@property (nonatomic) BOOL isKeyFace;

- (void).cxx_destruct;
- (id)init;
- (id)initWithObservationIdentifier:(id)a0 clusterIdentifier:(id)a1 isKeyFace:(BOOL)a2;

@end
