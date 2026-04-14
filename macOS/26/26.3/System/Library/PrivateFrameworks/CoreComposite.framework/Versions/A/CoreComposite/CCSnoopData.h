@interface CCSnoopData : NSObject {
    unsigned long long _drawCount;
    unsigned long long _vertexCount;
    unsigned long long _computeCount;
}

@property (readonly, nonatomic) unsigned long long drawCount;
@property (readonly, nonatomic) float averageVertexCount;
@property (readonly, nonatomic) unsigned long long totalVertexCount;
@property (readonly, nonatomic) unsigned long long computeCount;

- (void)reset;
- (void)frameCompletedForBuffer:(id)a0;

@end
