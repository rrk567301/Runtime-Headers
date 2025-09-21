@class NSUUID, ADVisualDepthGeometry;

@interface ADVisualDepthMeshChunk : NSObject

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL longRange;
@property (retain, nonatomic) ADVisualDepthGeometry *vertices;
@property (retain, nonatomic) ADVisualDepthGeometry *faces;
@property (retain, nonatomic) ADVisualDepthGeometry *confidence;
@property (retain, nonatomic) ADVisualDepthGeometry *classification;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } transform;

+ (id)meshChunkWithVertices:(id)a0 faces:(id)a1 confidence:(id)a2 classification:(id)a3 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a4 uuid:(id)a5 timestamp:(double)a6;
+ (id)meshChunkWithVertices:(id)a0 faces:(id)a1 confidence:(id)a2 classification:(id)a3 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a4 uuid:(id)a5 timestamp:(double)a6 longRange:(BOOL)a7;
+ (id)meshChunkWithVertices:(id)a0 faces:(id)a1 confidence:(id)a2 classification:(id)a3 uuid:(id)a4 timestamp:(double)a5;
+ (id)meshChunkWithVertices:(id)a0 faces:(id)a1 confidence:(id)a2 classification:(id)a3 uuid:(id)a4 timestamp:(double)a5 longRange:(BOOL)a6;
+ (id)meshChunkWithVerticesBuffer:(id)a0 verticesCount:(long long)a1 verticesOffset:(long long)a2 verticesStride:(long long)a3 facesBuffer:(id)a4 facesCount:(long long)a5 facesOffset:(long long)a6 facesStride:(long long)a7 uuid:(id)a8 timestamp:(double)a9;
+ (id)removedMeshChunkWithUuid:(id)a0 timestamp:(double)a1;
+ (id)removedMeshChunkWithUuid:(id)a0 timestamp:(double)a1 longRange:(BOOL)a2;

- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (id)initWithFile:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithVertices:(id)a0 faces:(id)a1 confidence:(id)a2 classification:(id)a3 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a4 uuid:(id)a5 timestamp:(double)a6;
- (id)initWithVertices:(id)a0 faces:(id)a1 confidence:(id)a2 classification:(id)a3 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a4 uuid:(id)a5 timestamp:(double)a6 longRange:(BOOL)a7;

@end
