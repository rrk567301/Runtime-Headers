@class NSArray;

@interface ML3SpotlightBatchDonationObject : NSObject {
    long long _currentRevision;
    long long _targetRevision;
    NSArray *_trackPersistentIDsToUpdate;
    NSArray *_playlistPersistentIDsToUpdate;
    NSArray *_albumPersistentIDsToUpdate;
    NSArray *_artistPersistentIDsToUpdate;
    NSArray *_entityStringsToDelete;
}

- (void).cxx_destruct;
- (long long)currentRevision;
- (id)albumPersistentIDsToUpdate;
- (id)artistPersistentIDsToUpdate;
- (id)entityStringsToDelete;
- (id)initWithCurrentRevision:(long long)a0 targetRevision:(long long)a1 trackPersistentIDsToUpdate:(id)a2 playlistPersistentIDsToUpdate:(id)a3 albumPersistentIDsToUpdate:(id)a4 artistPersistentIDsToUpdate:(id)a5 entityStringsToDelete:(id)a6;
- (id)playlistPersistentIDsToUpdate;
- (long long)targetRevision;
- (id)trackPersistentIDsToUpdate;

@end
