@class TSPDatabase;

@interface TSPDatabaseDataRepresentation : SFUDataRepresentation {
    TSPDatabase *_database;
    long long _identifier;
}

- (void).cxx_destruct;
- (id)inputStream;
- (long long)dataLength;
- (BOOL)hasSameLocationAs:(id)a0;
- (id)initWithDatabase:(id)a0 identifier:(long long)a1;
- (struct ZeroCopyInputStream { void /* function */ **x0; } *)createProtobufInputStream;
- (struct sqlite3_blob { } *)_openBlob;

@end
