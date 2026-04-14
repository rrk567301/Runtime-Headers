@class NSMutableDictionary;

@interface CKLStreamLogStatsObserver : CKLStreamObserver

@property (retain) NSMutableDictionary *totalSizeByLine;
@property (retain) NSMutableDictionary *totalCountByLine;

- (void).cxx_destruct;
- (void)finish;
- (id)initWithLogTypes:(unsigned long long)a0;
- (void)eventMatched:(id)a0;

@end
