@class NSData, NSString;

@interface _DPCMSWordRecord : _DPCMSSequenceRecord

@property (retain, nonatomic) NSData *fragment;
@property (nonatomic) short fragmentPosition;
@property (nonatomic) short fragmentHashIndex;
@property (copy, nonatomic) NSString *plainFragment;

+ (id)entityName;

- (id)description;
- (void).cxx_destruct;
- (char)copyToManagedObject:(id)a0;
- (char)copyFromManagedObject:(id)a0;
- (id)initWithKey:(id)a0 plainSequence:(id)a1 sequence:(id)a2 sequenceHashIndex:(unsigned short)a3 plainFragment:(id)a4 fragment:(id)a5 fragmentHashIndex:(unsigned short)a6 fragmentPosition:(unsigned short)a7 creationDate:(double)a8 submitted:(char)a9 objectId:(id)a10;

@end
