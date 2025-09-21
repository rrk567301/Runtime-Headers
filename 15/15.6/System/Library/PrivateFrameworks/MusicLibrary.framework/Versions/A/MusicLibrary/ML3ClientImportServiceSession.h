@class ML3ClientImportSessionConfiguration, ML3MusicLibrary, ML3DatabaseConnection;

@interface ML3ClientImportServiceSession : NSObject {
    void *_importSession;
    ML3DatabaseConnection *_databaseConnection;
    ML3MusicLibrary *_library;
    ML3ClientImportSessionConfiguration *_configuration;
}

- (void)dealloc;
- (void).cxx_destruct;
- (char)finish;
- (char)begin;
- (char)addTrack:(id)a0 persistentID:(id *)a1;
- (id)initWithLibrary:(id)a0 connection:(id)a1 configuration:(id)a2;
- (char)removeTrack:(id)a0 persistentID:(id *)a1;
- (char)updateTrack:(id)a0 persistentID:(id *)a1;

@end
