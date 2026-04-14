@class CorrectionsProfilesPersistedState;

@interface CorrectionsProfilesLastState : NSObject {
    CorrectionsProfilesPersistedState *_persistedState;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)description;
- (void).cxx_destruct;
- (id)_path;
- (id)digest;
- (BOOL)loadLastState;
- (id)profileDataForKey:(id)a0;
- (id)correctionKeys;
- (void)saveNewState:(id)a0;

@end
