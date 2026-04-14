@interface HMDRecordChangedLogEvent : HMDRecordOperationLogEvent

+ (id)recordChanged:(id)a0;
+ (id)legacyRecordChanged:(id)a0;

- (id)initWithChangedRecord:(id)a0 isLegacy:(BOOL)a1;

@end
