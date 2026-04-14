@class NSDictionary, NSString;

@interface PGMeaningQuestion : PGSurveyQuestion {
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
- (id)initWithConfirmedMeaningLabel:(id)a0 assetUUID:(id)a1;
- (id)initWithMeaningLabel:(id)a0 assetUUID:(id)a1 localFactoryScore:(double)a2;
- (double)localFactoryScore;

@end
