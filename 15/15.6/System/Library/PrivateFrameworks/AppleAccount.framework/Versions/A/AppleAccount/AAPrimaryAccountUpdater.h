@class ACAccount;

@interface AAPrimaryAccountUpdater : AAVersionUpdater <AADataclassVersionUpdateProtocol> {
    ACAccount *_appleAccount;
}

+ (id)orderedVersions;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (char)performVersionUpdate1ToVersion2;
- (char)performVersionUpdate0ToVersion1;

@end
