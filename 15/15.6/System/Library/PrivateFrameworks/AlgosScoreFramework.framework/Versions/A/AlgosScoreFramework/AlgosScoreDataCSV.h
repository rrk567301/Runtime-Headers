@class AlgosScoreCSVReader, NSMutableDictionary;

@interface AlgosScoreDataCSV : NSObject {
    void *csvData;
}

@property (retain, nonatomic) AlgosScoreCSVReader *rawStreamData;
@property (retain, nonatomic) NSMutableDictionary *statsDict;
@property int debug;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)readData:(id)a0;
- (void)clearStreamingData;
- (void)populateScore:(id)a0;
- (id)readData:(id)a0 catchException:(char)a1;
- (id)readDirectoryAndScore:(id)a0 score:(id)a1 options:(id)a2;
- (int)transformer;

@end
