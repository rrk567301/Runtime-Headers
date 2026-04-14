@class NSString, NSDictionary;

@interface PGExternalAssetRelevanceQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSString *_entityIdentifier;
    NSDictionary *_additionalInfo;
}

- (unsigned short)state;
- (unsigned short)type;
- (unsigned short)displayType;
- (unsigned short)entityType;
- (id)entityIdentifier;
- (id)additionalInfo;
- (void).cxx_destruct;
- (id)initWithAssetUUID:(id)a0 momentLocalIdentifiers:(id)a1 assetInferredAsRelevant:(BOOL)a2;

@end
