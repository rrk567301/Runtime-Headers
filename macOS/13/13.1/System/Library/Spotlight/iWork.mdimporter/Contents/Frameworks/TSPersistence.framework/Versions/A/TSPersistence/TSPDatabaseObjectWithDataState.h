@interface TSPDatabaseObjectWithDataState : TSPDatabaseObject {
    long long _dataState;
}

- (id)fileURL;
- (BOOL)hasDataState;
- (long long)dataState;
- (BOOL)hasFileState;
- (id)fileState;
- (id)initWithIdentifier:(long long)a0 classType:(int)a1 dataState:(long long)a2;

@end
