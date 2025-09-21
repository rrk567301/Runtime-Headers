@class TSCH3DResource, TSCH3DResourceHandle;

@interface TSCH3DSessionLoadResourceResult : NSObject

@property (nonatomic) char generated;
@property (nonatomic) char uploaded;
@property (nonatomic) char failed;
@property (retain, nonatomic) TSCH3DResourceHandle *handle;
@property (retain, nonatomic) TSCH3DResource *resource;

- (id)init;
- (void).cxx_destruct;
- (char)exists;

@end
