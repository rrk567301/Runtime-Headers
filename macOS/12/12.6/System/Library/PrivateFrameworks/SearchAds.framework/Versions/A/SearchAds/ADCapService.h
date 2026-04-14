@class ADCapData;

@interface ADCapService : NSObject

@property (retain, nonatomic) ADCapData *capData;

- (id)init;
- (void).cxx_destruct;
- (void)updateCapData:(id)a0 forType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)updateClickData:(id)a0 completionHandler:(id /* block */)a1;
- (id)clickCountByLine;
- (id)impressionCountByLine;
- (void)cleanDownloadData;
- (void)updateFrequencyCapData:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateDownloadData:(id)a0 identifier:(id)a1 forType:(long long)a2 completionHandler:(id /* block */)a3;

@end
