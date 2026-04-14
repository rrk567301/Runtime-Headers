@class NSDate;

@interface EKEventSliceInfo : EKBatchChangeInfo

@property long long sliceType;
@property (retain) NSDate *sliceDate;
@property (retain) NSDate *currentDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)affectsObject:(id)a0;
- (id)updatedIdentifier:(id)a0;

@end
