@class NSString;

@interface PGSyndicatedAssetsQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSString *_entityIdentifier;
}

- (void).cxx_destruct;
- (unsigned short)state;
- (unsigned short)type;
- (unsigned short)displayType;
- (unsigned short)entityType;
- (id)entityIdentifier;
- (id)initWithAssetSyndicationIdentifier:(id)a0;
- (char)isEquivalentToPersistedQuestion:(id)a0;
- (char)isEquivalentToQuestion:(id)a0;

@end
