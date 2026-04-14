@class NSString, NSMutableDictionary;

@interface TITraceLog : NSObject

@property (retain, nonatomic) NSMutableDictionary *recordEntryCache;
@property (readonly, nonatomic) NSString *logContents;

- (void).cxx_destruct;
- (id)initWithLogContents:(id)a0;
- (id)recordMatchingUUID:(id)a0;
- (id)recordStringMatchingUUID:(id)a0;
- (id)recordMatchingTypologyRecord:(id)a0;
- (id)recordStringMatchingTypologyRecord:(id)a0;
- (void)enumerateRecordsWithBlock:(id /* block */)a0;
- (void)enumerateTextRecordEntriesUsingBlock:(id /* block */)a0;

@end
