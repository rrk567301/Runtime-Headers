@class NSString, NSData, NSDate, NSNumber;

@interface HMDSnapshotFile : HMFObject <HMFLogging>

@property (copy) NSNumber *slotIdentifier;
@property (getter=isFilled) char filled;
@property (readonly) NSString *directory;
@property (readonly) NSString *filePath;
@property (readonly) NSDate *snapshotTimestamp;
@property (readonly) NSNumber *aspectRatio;
@property (readonly) char externalFilePath;
@property (readonly) NSData *encodedDataForIDSSend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (void)clearSlot;
- (id)copyFileAtPath:(id)a0 snapshotTimestamp:(id)a1;
- (char)decodeIDSDataReceived:(id)a0 snapshotDataTransaction:(id)a1;
- (void)fillSlot;
- (id)initWithImageDirectory:(id)a0;
- (id)initWithImageDirectory:(id)a0 externalFilePath:(id)a1 snapshotTimestamp:(id)a2;
- (id)initWithImageDirectory:(id)a0 filePath:(id)a1 snapshotTimestamp:(id)a2;
- (id)initWithImageDirectory:(id)a0 snapshotData:(id)a1;
- (char)prepareParametersWithFilePath:(id)a0 snapshotData:(id)a1 directory:(id)a2 snapshotTimestamp:(id)a3 resize:(char)a4 writeBack:(char)a5;
- (void)updateSlotIdentifier;

@end
