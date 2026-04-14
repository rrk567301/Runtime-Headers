@class NSString;

@interface PGSyndicatedAssetsQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSString *_entityIdentifier;
}

- (unsigned short)type;
- (unsigned short)state;
- (unsigned short)displayType;
- (void).cxx_destruct;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (id)initWithAssetSyndicationIdentifier:(id)a0;
- (BOOL)isEquivalentToPersistedQuestion:(id)a0;
- (BOOL)isEquivalentToQuestion:(id)a0;

@end
