@class NSMutableArray;

@interface PIBrushStrokeHistory : NSObject

@property (retain, nonatomic) NSMutableArray *entries;
@property (readonly, nonatomic) unsigned long long entryCount;

- (id)initWithData:(id)a0 error:(out id *)a1;
- (id)initWithEntries:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)addEntry:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_playbackHistoryIndex:(unsigned long long)a0 toReceiver:(id)a1 options:(unsigned long long)a2 pauseInterval:(double)a3 completion:(id /* block */)a4;
- (id)exportDataWithError:(out id *)a0;
- (void)playbackHistoryToReceiver:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)playbackHistoryToReceiver:(id)a0 options:(unsigned long long)a1 pauseInterval:(double)a2 completion:(id /* block */)a3;

@end
