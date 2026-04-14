@class NSString, NSMutableArray, NSNumber;

@interface NetAddressBook2 : NSObject {
    NSString *_app;
    NSString *_user;
    NSString *_host;
    NSString *_prefName;
    NSMutableArray *_entries;
    NSNumber *nextNewID;
}

- (BOOL)write:(id)a0;
- (void)load;
- (void)flush;
- (void).cxx_destruct;
- (void)removeEntryAtIndex:(unsigned long long)a0;
- (id)entryWithName:(id)a0;
- (id)entryWithIndex:(unsigned long long)a0;
- (id)entryWithID:(unsigned int)a0;
- (id)initWithApplicationID:(id)a0 userName:(id)a1 hostName:(id)a2 preferenceName:(id)a3;
- (unsigned long long)numEntries;
- (BOOL)removeEntryWithID:(unsigned int)a0;

@end
