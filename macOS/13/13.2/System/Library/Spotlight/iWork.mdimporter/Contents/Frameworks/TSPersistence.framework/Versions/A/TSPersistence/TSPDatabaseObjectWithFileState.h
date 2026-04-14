@class NSString, NSURL;

@interface TSPDatabaseObjectWithFileState : TSPDatabaseObject {
    NSString *_fileState;
    NSURL *_packageURL;
}

- (void).cxx_destruct;
- (id)fileURL;
- (BOOL)hasDataState;
- (long long)dataState;
- (BOOL)hasFileState;
- (id)fileState;
- (id)initWithIdentifier:(long long)a0 classType:(int)a1 fileState:(id)a2 packageURL:(id)a3;

@end
