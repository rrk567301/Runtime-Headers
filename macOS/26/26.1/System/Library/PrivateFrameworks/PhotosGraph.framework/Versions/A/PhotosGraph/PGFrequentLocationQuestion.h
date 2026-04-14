@class NSDictionary, NSString;

@interface PGFrequentLocationQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
}

- (unsigned short)entityType;
- (unsigned short)type;
- (id)additionalInfo;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (void).cxx_destruct;
- (unsigned short)state;
- (id)initWithAssetUUID:(id)a0 location:(id)a1 locationTypeName:(id)a2;
- (double)localFactoryScore;

@end
