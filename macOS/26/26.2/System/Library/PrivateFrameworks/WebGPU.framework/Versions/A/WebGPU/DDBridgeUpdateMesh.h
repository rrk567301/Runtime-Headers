@class NSArray, NSData, DDBridgeChainedFloat4x4;

@interface DDBridgeUpdateMesh : NSObject {
    void /* function */ parts;
    void /* function */ renderFlags;
    void /* function */ vertices;
    void /* function */ indices;
    void /* function */ materialIds;
}

@property (nonatomic, readonly) long long partCount;
@property (nonatomic, readonly) NSArray *parts;
@property (nonatomic, readonly) NSArray *renderFlags;
@property (nonatomic, readonly) NSArray *vertices;
@property (nonatomic, readonly) NSData *indices;
@property (nonatomic, readonly) struct { void /* unknown type, empty encoding */ x0[4]; } transform;
@property (nonatomic, retain) DDBridgeChainedFloat4x4 *instanceTransforms;
@property (nonatomic, readonly) NSArray *materialIds;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPartCount:(long long)a0 parts:(id)a1 renderFlags:(id)a2 vertices:(id)a3 indices:(id)a4 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a5 instanceTransforms:(id)a6 materialIds:(id)a7;

@end
