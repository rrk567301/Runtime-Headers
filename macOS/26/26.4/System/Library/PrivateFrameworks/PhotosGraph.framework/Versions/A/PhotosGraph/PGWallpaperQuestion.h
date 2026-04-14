@class NSDictionary, NSString;

@interface PGWallpaperQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
}

- (unsigned short)entityType;
- (id)additionalInfo;
- (void).cxx_destruct;
- (unsigned short)displayType;
- (unsigned short)type;
- (unsigned short)state;
- (id)entityIdentifier;
- (id)initWithAssetUUID:(id)a0 suggestionSubtype:(unsigned short)a1;
- (double)localFactoryScore;

@end
