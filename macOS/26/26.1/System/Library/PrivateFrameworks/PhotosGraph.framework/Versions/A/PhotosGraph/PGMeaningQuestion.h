@class NSDictionary, NSString;

@interface PGMeaningQuestion : PGSurveyQuestion {
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
- (id)initWithConfirmedMeaningLabel:(id)a0 assetUUID:(id)a1;
- (id)initWithMeaningLabel:(id)a0 assetUUID:(id)a1 localFactoryScore:(double)a2;
- (double)localFactoryScore;

@end
