@class CNContactStore, NSString, NSArray, NSMutableArray;

@interface PPContactNameRecordChangeHistoryAccumulator : NSObject <CNChangeHistoryEventVisitor> {
    CNContactStore *_store;
    NSArray *_keysToFetch;
    NSMutableArray *_records;
    char _truncated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)visitAddContactEvent:(id)a0;
- (void)visitDeleteContactEvent:(id)a0;
- (void)visitDropEverythingEvent:(id)a0;
- (void)visitUpdateContactEvent:(id)a0;

@end
