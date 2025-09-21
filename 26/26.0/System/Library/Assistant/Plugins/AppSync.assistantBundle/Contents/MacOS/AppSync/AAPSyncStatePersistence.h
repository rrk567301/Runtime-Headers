@class NSURL, AAPSyncState, NSFileManager;

@interface AAPSyncStatePersistence : NSObject {
    NSFileManager *_fileManager;
}

@property (copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) AAPSyncState *state;

- (id)load;
- (id)reset;
- (id)save:(id)a0;
- (void).cxx_destruct;
- (id)_fileManager;
- (id)_errWithCode:(long long)a0 desc:(id)a1 err:(id)a2;
- (id)_generateURLIfNeededWithError:(id *)a0;

@end
