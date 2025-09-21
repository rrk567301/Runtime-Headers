@interface HMDRecordOperationLogEvent : HMMLogEvent

@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic, getter=isLegacy) char legacy;

- (id)initWithSize:(unsigned long long)a0 isLegacy:(char)a1;

@end
