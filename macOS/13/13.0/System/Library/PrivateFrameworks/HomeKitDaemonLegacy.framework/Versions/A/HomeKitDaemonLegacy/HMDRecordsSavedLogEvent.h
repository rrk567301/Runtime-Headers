@interface HMDRecordsSavedLogEvent : HMDRecordOperationLogEvent

+ (id)recordsSaved:(id)a0;
+ (id)legacyRecordsSaved:(id)a0;

- (id)initWithSavedRecords:(id)a0 isLegacy:(BOOL)a1;

@end
