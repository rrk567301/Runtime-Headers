@class NSData;

@interface IMSComfortPipelineMeshData : NSObject

@property (copy, nonatomic) NSData *verticesData;
@property (nonatomic) long long verticesCount;
@property (copy, nonatomic) NSData *indicesData;
@property (nonatomic) long long indicesCount;

- (void).cxx_destruct;

@end
