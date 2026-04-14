@class NSDictionary, NSString;

@interface PGMemoryQualityQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
}

- (id)additionalInfo;
- (unsigned short)type;
- (unsigned short)state;
- (unsigned short)displayType;
- (void).cxx_destruct;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (id)initWithMemory:(id)a0 localFactoryScore:(double)a1;
- (double)localFactoryScore;

@end
