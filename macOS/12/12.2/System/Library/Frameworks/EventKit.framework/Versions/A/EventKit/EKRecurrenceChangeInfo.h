@class NSDateComponents;

@interface EKRecurrenceChangeInfo : EKBatchChangeInfo

@property long long changeType;
@property (retain) NSDateComponents *offset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)updatedIdentifier:(id)a0;

@end
