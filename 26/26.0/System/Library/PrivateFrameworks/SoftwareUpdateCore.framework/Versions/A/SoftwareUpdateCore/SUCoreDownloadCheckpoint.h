@interface SUCoreDownloadCheckpoint : NSObject

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) long long downloadedBytes;

- (id)initWithTimestamp:(double)a0 downloadedBytes:(long long)a1;

@end
