@interface RCPFilePath : NSObject

@property (nonatomic) struct CGPath { } *path;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long endTimestamp;
@property (nonatomic) char finished;

@end
