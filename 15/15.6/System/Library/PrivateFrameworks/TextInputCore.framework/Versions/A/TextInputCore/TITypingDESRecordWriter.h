@class DESRecordStore;

@interface TITypingDESRecordWriter : NSObject

@property (retain, nonatomic) DESRecordStore *typingDataStore;

- (id)init;
- (void).cxx_destruct;
- (void)storeAlignedSession:(id)a0 completion:(id /* block */)a1;
- (void)clearStoredRecordsWithCompletionHandler:(id /* block */)a0;
- (void)fetchRecords:(id /* block */)a0;
- (char)shouldRecordToDES;
- (void)storeTypingSession:(id)a0 containsCP:(char)a1 completion:(id /* block */)a2;

@end
