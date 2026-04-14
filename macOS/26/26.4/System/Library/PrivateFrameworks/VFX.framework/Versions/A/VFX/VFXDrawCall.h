@interface VFXDrawCall : NSObject

@property (copy, nonatomic) id /* block */ encodeHandler;
@property (nonatomic) void /* unknown type, empty encoding */ boundingBoxMin;
@property (nonatomic) void /* unknown type, empty encoding */ boundingBoxMax;
@property (nonatomic) unsigned long long primitiveType;
@property (nonatomic) int materialType;
@property (nonatomic) int renderingOrder;
@property (readonly, nonatomic) long long emitterObjectID;

- (void)dealloc;

@end
