@interface HMDRecordsSavedLogEvent : HMDRecordOperationLogEvent

+ (id)legacyRecordsSaved:(id)a0;
+ (id)recordsSaved:(id)a0;

- (id)initWithSavedRecords:(id)a0 isLegacy:(char)a1;

@end
