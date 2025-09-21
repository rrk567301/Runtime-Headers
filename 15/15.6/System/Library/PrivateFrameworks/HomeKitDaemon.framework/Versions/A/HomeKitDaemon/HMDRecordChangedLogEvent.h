@interface HMDRecordChangedLogEvent : HMDRecordOperationLogEvent

+ (id)legacyRecordChanged:(id)a0;
+ (id)recordChanged:(id)a0;

- (id)initWithChangedRecord:(id)a0 isLegacy:(char)a1;

@end
