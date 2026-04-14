@protocol MTLBuffer;

@interface VFXREBindingMeshData : NSObject

@property (nonatomic, retain) id<MTLBuffer> buffer;
@property (nonatomic) unsigned int length;
@property (nonatomic) unsigned long long format;
@property (nonatomic) unsigned short offset;
@property (nonatomic) unsigned short stride;

- (id)init;
- (void).cxx_destruct;

@end
