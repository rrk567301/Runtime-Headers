@class NSArray, NSString, NSNumber;

@interface ICTTAudioDocument : NSObject

@property (nonatomic) BOOL isCallRecording;
@property (nonatomic) unsigned long long callType;
@property (nonatomic, retain) void /* unknown type, empty encoding */ document;
@property (nonatomic, readonly) NSArray *orderedFragmentUUIDs;
@property (nonatomic, readonly) NSString *transcriptAsPlainText;
@property (nonatomic, readonly) NSNumber *transcriptVersion;

+ (void)registerWithICCRCoder;
+ (id)unarchiveFromData:(id)a0 replicaID:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)archivedData;
- (id)initWithReplicaID:(id)a0 compatibleDocument:(id)a1;
- (unsigned long long)mergeWithMergeableData:(id)a0 replicaID:(id)a1;
- (void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)a0;

@end
