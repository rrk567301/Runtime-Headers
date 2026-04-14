@class CKXBackingStore, CKMergeableValueID, NSData, CKDistributedTimestampStateVector, CKAtomBatchMetadata;

@interface CKAtomBatch : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKXBackingStore *backingStore;
@property (readonly, nonatomic) struct { unsigned char x0; unsigned char x1; } writerIdentity;
@property (readonly, nonatomic) BOOL isWriting;
@property (readonly, nonatomic) CKDistributedTimestampStateVector *enumeratedContentsVector;
@property (readonly, nonatomic) unsigned char formatVersion;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) CKMergeableValueID *mergeableValueID;
@property (readonly, nonatomic) CKAtomBatchMetadata *metadata;
@property (readonly, nonatomic) long long count;
@property (copy, nonatomic) id /* block */ atomValueDescriptionBlock;

+ (id)bindingForFormatVersion:(unsigned char)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)finishWriting;
- (id)location;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)descriptionWithStringSiteIdentifiers;
- (id)descriptionWithStringSiteIdentifiers:(BOOL)a0;
- (id)initWithFormatVersion:(unsigned char)a0 optionsByReaderWriterClass:(id)a1 mergeableValueID:(id)a2 metadata:(id)a3 data:(id)a4 error:(id *)a5;
- (id)initWriterWithMergeableValueID:(id)a0 version:(unsigned char)a1;
- (id)initWriterWithAtomLocation:(id)a0 version:(unsigned char)a1;
- (BOOL)_setData:(id)a0 optionsByReaderWriterClass:(id)a1 error:(id *)a2;
- (void)enumerateAtomsWithOptions:(id)a0 usingBlock:(id /* block */)a1;
- (void)appendAtomWithBlock:(id /* block */)a0;
- (id)atomsNotInContentsVector;
- (id)initWriterWithMergeableValueID:(id)a0 metadata:(id)a1 version:(unsigned char)a2;
- (id)initWithData:(id)a0 mergeableValueID:(id)a1 metadata:(id)a2 error:(id *)a3;
- (id)atomBatchWithMergeableValueID:(id)a0 metadata:(id)a1 finishWriting:(BOOL)a2;
- (id)initPlaceholderWithMergeableValueID:(id)a0 metadata:(id)a1;
- (id)initWriterWithMergeableValueID:(id)a0;
- (id)initWriter;
- (id)initWriterWithAtomLocation:(id)a0;
- (BOOL)_setData:(id)a0 error:(id *)a1;
- (long long)numberOfAtoms;
- (void)mergeAtomBatch:(id)a0;
- (id)batchWithAtomsContainedInContentsVector;
- (id)copyWithMergeableValueID:(id)a0;
- (id)writableCopy;
- (id)writableCopyWithMergeableValueID:(id)a0 metadata:(id)a1;

@end
