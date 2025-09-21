@interface PXGEngineDeferRenderEventSerializable : NSObject <PXGTungstenRecordingSerializable>

@property (nonatomic) char shouldDeferRenderUntilNextFrame;
@property (nonatomic) char delegateAllowsRender;

- (id)createSerializableObject;
- (id)initWithSerializableObject:(id)a0;

@end
