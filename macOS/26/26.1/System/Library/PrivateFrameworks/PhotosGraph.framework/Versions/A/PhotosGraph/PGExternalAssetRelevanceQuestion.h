@class NSString, NSDictionary;

@interface PGExternalAssetRelevanceQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSString *_entityIdentifier;
    NSDictionary *_additionalInfo;
}

- (unsigned short)entityType;
- (unsigned short)type;
- (id)additionalInfo;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (void).cxx_destruct;
- (unsigned short)state;
- (id)initWithAssetUUID:(id)a0 momentLocalIdentifiers:(id)a1 assetInferredAsRelevant:(BOOL)a2;

@end
