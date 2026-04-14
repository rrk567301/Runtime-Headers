@interface TSPDatabaseObjectWithDataState : TSPDatabaseObject {
    long long _dataState;
}

- (id)fileURL;
- (BOOL)hasDataState;
- (BOOL)hasFileState;
- (long long)dataState;
- (id)fileState;
- (id)initWithIdentifier:(long long)a0 classType:(int)a1 dataState:(long long)a2;

@end
