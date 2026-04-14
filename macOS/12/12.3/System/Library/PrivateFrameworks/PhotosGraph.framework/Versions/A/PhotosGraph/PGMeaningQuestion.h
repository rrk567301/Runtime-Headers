@class NSDictionary, NSString;

@interface PGMeaningQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
}

- (void).cxx_destruct;
- (unsigned short)state;
- (unsigned short)type;
- (unsigned short)displayType;
- (id)additionalInfo;
- (unsigned short)entityType;
- (id)entityIdentifier;
- (double)localFactoryScore;
- (id)initWithMeaningLabel:(id)a0 assetUUID:(id)a1 localFactoryScore:(double)a2;
- (id)initWithConfirmedMeaningLabel:(id)a0 assetUUID:(id)a1;

@end
