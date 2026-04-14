@class NSString, NSMutableData, NSNumber, HMDDataStreamFragment;

@interface HMDDataStreamFragmentAssembler : HMFObject

@property (readonly, copy) NSString *type;
@property (readonly, copy) NSMutableData *data;
@property (copy) NSNumber *currentChunkSequenceNumber;
@property (copy) HMDDataStreamFragment *assembledFragment;
@property (readonly, copy) NSNumber *sequenceNumber;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithSequenceNumber:(id)a0 type:(id)a1;
- (BOOL)addFragmentChunk:(id)a0 error:(id *)a1;

@end
