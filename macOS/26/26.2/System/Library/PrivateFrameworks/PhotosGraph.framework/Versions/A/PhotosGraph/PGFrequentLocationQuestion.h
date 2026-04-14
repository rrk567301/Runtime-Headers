@class NSDictionary, NSString;

@interface PGFrequentLocationQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
}

- (unsigned short)state;
- (id)additionalInfo;
- (unsigned short)type;
- (void).cxx_destruct;
- (unsigned short)entityType;
- (id)entityIdentifier;
- (unsigned short)displayType;
- (id)initWithAssetUUID:(id)a0 location:(id)a1 locationTypeName:(id)a2;
- (double)localFactoryScore;

@end
