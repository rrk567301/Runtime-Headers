@class NSString, TTMergeableAttributedString;

@interface TTMergeableStringVersionedDocument : TTVersionedDocument <REMReplicaClockProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TTMergeableAttributedString *mergeableString;

+ (unsigned int)serializationVersion;
+ (unsigned int)minimumSupportedVersion;

- (void).cxx_destruct;
- (id)clockElementListForReplicaUUID:(id)a0;
- (id)initWithArchive:(const void *)a0 andReplicaID:(id)a1;
- (id)initWithData:(id)a0 andReplicaID:(id)a1;
- (id)initWithMergeableString:(id)a0;
- (void)mergeVersion:(unsigned int)a0 fromData:(id)a1;
- (unsigned long long)mergeWithStringVersionedDocument:(id)a0;
- (id)rem_copyWithReplicaIDForNewEdits:(id)a0;
- (char)rem_isEqual:(id)a0;
- (id)serializeCurrentVersion:(unsigned int *)a0;

@end
