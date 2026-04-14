@class ADLandingCapData;

@interface ADLandingCapService : NSObject

@property (retain, nonatomic) ADLandingCapData *landingCapData;

- (id)init;
- (void).cxx_destruct;
- (id)impressionCountByLine;
- (id)clickCountByLine;
- (void)updateFrequencyCapData:(id)a0;
- (void)updateClickData:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateCapData:(id)a0 forType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)updateDownloadData:(id)a0 forType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)cleanDownloadData;

@end
