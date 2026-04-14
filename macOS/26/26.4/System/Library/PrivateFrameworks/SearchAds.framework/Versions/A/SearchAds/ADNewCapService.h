@class ADCapData;

@interface ADNewCapService : NSObject

@property (retain, nonatomic) ADCapData *capData;
@property (nonatomic) long long storageType;
@property (nonatomic) double clickExpirationThresholdInSeconds;
@property (nonatomic) double frequencyCapExpirationInSeconds;
@property (nonatomic) unsigned long long maxFrequencyCapElements;
@property (nonatomic) unsigned long long maxClickCapElements;

- (void)updateClickData:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateDownloadData:(id)a0 forType:(long long)a1 completionHandler:(id /* block */)a2;
- (id)_storageTypeString;
- (void)cleanDownloadData;
- (id)clickCountByLine;
- (id)initWithStorageType:(long long)a0;
- (id)impressionCountByLine;
- (void).cxx_destruct;
- (id)init;
- (void)updateCapData:(id)a0 forType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)updateFrequencyCapData:(id)a0 completionHandler:(id /* block */)a1;

@end
