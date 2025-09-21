@class NSString;

@interface _DPOBHSequenceMO : _DPOBHRecordMO

@property (copy, nonatomic) NSString *plainSequence;
@property (nonatomic) long long sequenceBitPosition;
@property (nonatomic) char sequenceBitValue;

+ (id)fetchRequest;

@end
