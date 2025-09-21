@class NSString;

@interface _DPOBHSequenceRecord : _DPOBHRecord

@property (nonatomic) long long sequenceBitPosition;
@property (nonatomic) char sequenceBitValue;
@property (retain, nonatomic) NSString *plainSequence;

+ (id)entityName;
+ (id)recordWithKey:(id)a0 sequence:(id)a1 bitPosition:(long long)a2 bitValue:(char)a3 creationDate:(double)a4 submitted:(char)a5 objectId:(id)a6;

- (id)description;
- (void).cxx_destruct;
- (char)copyToManagedObject:(id)a0;
- (id)jsonString;
- (char)copyFromManagedObject:(id)a0;
- (id)initWithKey:(id)a0 sequence:(id)a1 bitPosition:(long long)a2 bitValue:(char)a3 creationDate:(double)a4 submitted:(char)a5 objectId:(id)a6;

@end
