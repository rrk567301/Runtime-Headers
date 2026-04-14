@class NSString;

@interface PGSyndicatedAssetsQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSString *_entityIdentifier;
}

- (unsigned short)state;
- (unsigned short)type;
- (unsigned short)displayType;
- (unsigned short)entityType;
- (id)entityIdentifier;
- (void).cxx_destruct;
- (id)initWithAssetSyndicationIdentifier:(id)a0;
- (BOOL)isEquivalentToPersistedQuestion:(id)a0;
- (BOOL)isEquivalentToQuestion:(id)a0;

@end
