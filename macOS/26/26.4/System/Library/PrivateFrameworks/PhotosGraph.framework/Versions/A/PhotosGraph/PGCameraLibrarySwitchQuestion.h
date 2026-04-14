@class NSString, NSDictionary;

@interface PGCameraLibrarySwitchQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSString *_entityIdentifier;
    NSDictionary *_additionalInfo;
}

- (unsigned short)entityType;
- (id)additionalInfo;
- (void).cxx_destruct;
- (unsigned short)displayType;
- (unsigned short)type;
- (unsigned short)state;
- (id)entityIdentifier;
- (id)initWithAssetUUID:(id)a0 libraryScopeUUID:(id)a1 previousSwitchState:(id)a2 currentSwitchState:(id)a3;
- (BOOL)isEquivalentToPersistedQuestion:(id)a0;
- (BOOL)isEquivalentToQuestion:(id)a0;

@end
