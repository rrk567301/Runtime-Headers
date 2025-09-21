@interface PXGEngineRecordingUpdateEndEventSerializable : NSObject <PXGTungstenRecordingSerializable>

@property (nonatomic) char updated;

- (id)createSerializableObject;
- (id)initWithSerializableObject:(id)a0;

@end
