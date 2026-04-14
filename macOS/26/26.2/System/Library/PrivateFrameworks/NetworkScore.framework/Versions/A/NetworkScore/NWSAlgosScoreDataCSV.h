@class NSMutableDictionary, NWSAlgosScoreCSVReader;

@interface NWSAlgosScoreDataCSV : NSObject {
    void *csvData;
}

@property (retain, nonatomic) NWSAlgosScoreCSVReader *rawStreamData;
@property (retain, nonatomic) NSMutableDictionary *statsDict;
@property int debug;

- (int)transformer;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)readData:(id)a0;
- (void)clearStreamingData;
- (void)populateScore:(id)a0;
- (id)readData:(id)a0 catchException:(BOOL)a1;
- (id)readDirectoryAndScore:(id)a0 score:(id)a1 options:(id)a2;

@end
