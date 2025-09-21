@class CKXBackingStore, CKMergeableValueID, CKDSReadableStorage, CKDistributedTimestampStateVector, CKMergeableDeltaVectors;

@interface CKAtomBatch : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) CKXBackingStore *backingStore;
@property (readonly, nonatomic) CKDSReadableStorage *storage;
@property (readonly, nonatomic) struct { unsigned char x0; unsigned char x1; } writerIdentity;
@property (readonly, nonatomic) char isWriting;
@property (readonly, nonatomic) CKDistributedTimestampStateVector *enumeratedContentsVector;
@property (readonly, nonatomic) unsigned char formatVersion;
@property (readonly, nonatomic) char fileBacked;
@property (readonly, copy, nonatomic) CKMergeableValueID *mergeableValueID;
@property (readonly, nonatomic) CKMergeableDeltaVectors *vectors;
@property (readonly, nonatomic) long long count;
@property (copy, nonatomic) id /* block */ atomValueDescriptionBlock;

+ (id)atomBatchByMergingAtomBatches:(id)a0 error:(id *)a1;
+ (id)bindingForFormatVersion:(unsigned char)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)finishWriting;
- (char)validateWithError:(id *)a0;
- (id)dataWithError:(id *)a0;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)contentsDescription;
- (char)finishWritingWithError:(id *)a0;
- (void)appendAtomWithBlock:(id /* block */)a0;
- (void)enumerateAtomsWithOptions:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithMergeableDelta:(id)a0 error:(id *)a1;
- (id)initWriterWithMergeableValueID:(id)a0 metadata:(id)a1 formatVersion:(unsigned char)a2 error:(id *)a3;
- (id)initWriterWithMergeableValueID:(id)a0 metadata:(id)a1 formatVersion:(unsigned char)a2 fileURL:(id)a3 error:(id *)a4;
- (id)_metadataForCoding;
- (char)_setStorage:(id)a0 optionsByReaderWriterClass:(id)a1 error:(id *)a2;
- (id)contentsDescriptionWithStringSiteIdentifiers;
- (id)contentsDescriptionWithStringSiteIdentifiers:(char)a0;
- (id)initWithData:(id)a0 mergeableValueID:(id)a1 vectors:(id)a2 error:(id *)a3;
- (id)initWithData:(id)a0 mergeableValueID:(id)a1 vectors:(id)a2 options:(id)a3 error:(id *)a4;
- (id)initWithFileURL:(id)a0 mergeableValueID:(id)a1 vectors:(id)a2 options:(id)a3 error:(id *)a4;
- (id)initWithStorage:(id)a0 optionsByReaderWriterClass:(id)a1 mergeableValueID:(id)a2 vectors:(id)a3 formatVersion:(unsigned char)a4 error:(id *)a5;
- (id)initWriterWithMergeableValueID:(id)a0 metadata:(id)a1 version:(unsigned char)a2;
- (id)initWriterWithMergeableValueID:(id)a0 vectors:(id)a1 formatVersion:(unsigned char)a2 error:(id *)a3;
- (id)initWriterWithMergeableValueID:(id)a0 vectors:(id)a1 formatVersion:(unsigned char)a2 fileURL:(id)a3 error:(id *)a4;
- (id)initWriterWithMergeableValueID:(id)a0 vectors:(id)a1 options:(id)a2 error:(id *)a3;
- (char)size:(unsigned long long *)a0 error:(id *)a1;
- (id)splitWithMaximumDeltaSize:(unsigned long long)a0 error:(id *)a1;
- (id)splitWithMaximumSize:(unsigned long long)a0 error:(id *)a1;
- (char)splitWithMaximumSize:(unsigned long long)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)writableCopy;
- (id)writableCopyWithMergeableValueID:(id)a0 vectors:(id)a1;
- (id)writerOptions;

@end
