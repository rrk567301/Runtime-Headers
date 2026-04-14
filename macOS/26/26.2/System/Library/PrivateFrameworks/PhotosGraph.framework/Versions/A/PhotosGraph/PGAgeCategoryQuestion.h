@class NSDictionary, NSString;

@interface PGAgeCategoryQuestion : PGSurveyQuestion {
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
- (id)initWithPersonUUID:(id)a0 ageCategory:(unsigned long long)a1 localFactoryScore:(double)a2;
- (double)localFactoryScore;

@end
