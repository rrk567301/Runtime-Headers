@class TSPDatabase;

@interface TSPDatabaseDataRepresentation : SFUDataRepresentation {
    TSPDatabase *_database;
    long long _identifier;
}

- (void).cxx_destruct;
- (id)inputStream;
- (long long)dataLength;
- (char)hasSameLocationAs:(id)a0;
- (struct sqlite3_blob { } *)_openBlob;
- (struct ZeroCopyInputStream { void /* function */ **x0; } *)createProtobufInputStream;
- (id)initWithDatabase:(id)a0 identifier:(long long)a1;

@end
