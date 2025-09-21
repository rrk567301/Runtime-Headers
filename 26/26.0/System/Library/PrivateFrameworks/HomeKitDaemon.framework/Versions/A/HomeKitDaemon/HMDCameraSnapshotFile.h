@class NSString, NSData, NSDate, NSNumber;

@interface HMDCameraSnapshotFile : HMFObject <HMFLogging>

@property (readonly, copy) NSString *filePath;
@property (readonly, copy) NSDate *dateCaptured;
@property (readonly) double aspectRatio;
@property (copy) NSNumber *slotIdentifier;
@property (readonly, copy) NSData *idsData;
@property (getter=isUnmanaged) BOOL unmanaged;
@property (getter=isFilled) BOOL filled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)snapshotFileCopiedFromFilePath:(id)a0 toDirectory:(id)a1 dateCaptured:(id)a2 error:(id *)a3;
+ (id)unmanagedSnapshotFileWithFilePath:(id)a0 dateCaptured:(id)a1 error:(id *)a2;

- (void)dealloc;
- (id)attributeDescriptions;
- (id)logIdentifier;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDirectory:(id)a0 imageData:(id)a1 videoResolution:(id)a2 dateCaptured:(id)a3 error:(id *)a4;
- (id)initWithDirectory:(id)a0 idsData:(id)a1 error:(id *)a2;
- (id)initWithDirectory:(id)a0 imageData:(id)a1 videoResolution:(id)a2 error:(id *)a3;
- (id)initWithDirectory:(id)a0 snapshot:(id)a1 error:(id *)a2;
- (id)initWithFilePath:(id)a0 dateCaptured:(id)a1 aspectRatio:(double)a2;
- (id)initWithFilePath:(id)a0 dateCaptured:(id)a1 error:(id *)a2;

@end
