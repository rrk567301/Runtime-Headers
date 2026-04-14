@class ADCapData;

@interface ADCapService : NSObject

@property (retain, nonatomic) ADCapData *capData;

- (void)updateClickData:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateFrequencyCapData:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateCapData:(id)a0 forType:(long long)a1 completionHandler:(id /* block */)a2;
- (id)init;
- (id)impressionCountByLine;
- (void).cxx_destruct;
- (void)updateDownloadData:(id)a0 identifier:(id)a1 forType:(long long)a2 completionHandler:(id /* block */)a3;
- (void)cleanDownloadData;
- (id)clickCountByLine;

@end
