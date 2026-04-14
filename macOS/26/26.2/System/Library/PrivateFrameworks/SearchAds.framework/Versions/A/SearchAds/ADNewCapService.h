@class ADCapData;

@interface ADNewCapService : NSObject

@property (retain, nonatomic) ADCapData *capData;
@property (nonatomic) long long storageType;
@property (nonatomic) double clickExpirationThresholdInSeconds;
@property (nonatomic) double frequencyCapExpirationInSeconds;
@property (nonatomic) unsigned long long maxFrequencyCapElements;
@property (nonatomic) unsigned long long maxClickCapElements;

- (void)updateCapData:(id)a0 forType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)cleanDownloadData;
- (void).cxx_destruct;
- (void)updateClickData:(id)a0 completionHandler:(id /* block */)a1;
- (id)clickCountByLine;
- (id)_storageTypeString;
- (id)impressionCountByLine;
- (void)updateDownloadData:(id)a0 forType:(long long)a1 completionHandler:(id /* block */)a2;
- (id)initWithStorageType:(long long)a0;
- (void)updateFrequencyCapData:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;

@end
