@class ADCapData;

@interface ADCapService : NSObject

@property (retain, nonatomic) ADCapData *capData;

- (void)cleanDownloadData;
- (void)updateDownloadData:(id)a0 identifier:(id)a1 forType:(long long)a2 completionHandler:(id /* block */)a3;
- (id)clickCountByLine;
- (void)updateCapData:(id)a0 forType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)updateClickData:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateFrequencyCapData:(id)a0 completionHandler:(id /* block */)a1;
- (id)impressionCountByLine;
- (void).cxx_destruct;
- (id)init;

@end
