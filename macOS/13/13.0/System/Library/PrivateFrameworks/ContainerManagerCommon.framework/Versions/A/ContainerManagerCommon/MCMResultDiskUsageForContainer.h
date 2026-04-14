@interface MCMResultDiskUsageForContainer : MCMResultBase

@property (nonatomic) unsigned long long diskUsageBytes;

- (BOOL)encodeResultOntoReply:(id)a0;
- (id)initWithDiskUsageBytes:(unsigned long long)a0;

@end
