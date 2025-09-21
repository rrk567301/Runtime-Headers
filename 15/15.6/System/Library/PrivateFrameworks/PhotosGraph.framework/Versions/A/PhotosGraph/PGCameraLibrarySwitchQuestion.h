@class NSString, NSDictionary;

@interface PGCameraLibrarySwitchQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSString *_entityIdentifier;
    NSDictionary *_additionalInfo;
}

- (void).cxx_destruct;
- (unsigned short)state;
- (unsigned short)type;
- (unsigned short)displayType;
- (id)additionalInfo;
- (unsigned short)entityType;
- (id)entityIdentifier;
- (id)initWithAssetUUID:(id)a0 libraryScopeUUID:(id)a1 previousSwitchState:(id)a2 currentSwitchState:(id)a3;
- (char)isEquivalentToPersistedQuestion:(id)a0;
- (char)isEquivalentToQuestion:(id)a0;

@end
