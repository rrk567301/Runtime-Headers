@class NSData, NSString;

@interface _DPCMSSequenceRecord : _DPCMSRecord

@property (retain, nonatomic) NSData *sequence;
@property (nonatomic) short sequenceHashIndex;
@property (copy, nonatomic) NSString *plainSequence;

+ (id)entityName;

- (id)description;
- (void).cxx_destruct;
- (char)copyToManagedObject:(id)a0;
- (char)copyFromManagedObject:(id)a0;
- (id)initWithKey:(id)a0 plainSequence:(id)a1 sequence:(id)a2 sequenceHashIndex:(unsigned short)a3 creationDate:(double)a4 submitted:(char)a5 objectId:(id)a6;

@end
