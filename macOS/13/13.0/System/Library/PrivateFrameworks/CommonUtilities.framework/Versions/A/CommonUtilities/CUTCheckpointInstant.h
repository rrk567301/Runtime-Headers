@class NSDate;

@interface CUTCheckpointInstant : CUTCheckpointSignpost

@property (retain, nonatomic) NSDate *date;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 uniqueIdentifier:(id)a1;
- (id)_reportStartDate;
- (id)_reportEndDate;
- (id)initWithDate:(id)a0 name:(id)a1 uniqueIdentifier:(id)a2;
- (void)_touchDate;
- (void)mergeWithCheckpoint:(id)a0;

@end
