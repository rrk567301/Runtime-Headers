@class NSDictionary, NSString;

@interface PGAgeCategoryQuestion : PGSurveyQuestion {
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
- (id)initWithPersonUUID:(id)a0 ageCategory:(unsigned long long)a1 localFactoryScore:(double)a2;
- (double)localFactoryScore;

@end
