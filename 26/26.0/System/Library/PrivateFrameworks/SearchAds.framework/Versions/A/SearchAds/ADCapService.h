@class ADCapData;

@interface ADCapService : NSObject

@property (retain, nonatomic) ADCapData *capData;

- (id)clickCountByLine;
- (void)updateCapData:(id)a0 forType:(long long)a1 completionHandler:(id /* block */)a2;
- (id)impressionCountByLine;
- (id)init;
- (void)updateClickData:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateFrequencyCapData:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateDownloadData:(id)a0 identifier:(id)a1 forType:(long long)a2 completionHandler:(id /* block */)a3;
- (void)cleanDownloadData;
- (void).cxx_destruct;

@end
