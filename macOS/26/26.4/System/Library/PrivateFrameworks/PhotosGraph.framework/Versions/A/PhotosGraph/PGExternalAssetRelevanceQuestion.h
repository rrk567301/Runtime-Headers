@class NSString, NSDictionary;

@interface PGExternalAssetRelevanceQuestion : PGSurveyQuestion {
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
- (id)initWithAssetUUID:(id)a0 momentLocalIdentifiers:(id)a1 assetInferredAsRelevant:(BOOL)a2;

@end
