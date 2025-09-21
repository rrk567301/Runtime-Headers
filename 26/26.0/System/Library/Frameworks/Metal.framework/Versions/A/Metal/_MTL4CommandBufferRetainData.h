@protocol MTLBuffer, MTLLogState;

@interface _MTL4CommandBufferRetainData : NSObject

@property (retain, nonatomic) id<MTLLogState> logState;
@property (retain, nonatomic) id<MTLBuffer> privateData;
@property (nonatomic) unsigned long long privateDataOffset;

- (void)dealloc;
- (id)init;

@end
