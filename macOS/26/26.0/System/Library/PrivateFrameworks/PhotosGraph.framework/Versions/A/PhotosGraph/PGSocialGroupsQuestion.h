@class NSDictionary, NSString;

@interface PGSocialGroupsQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
}

- (unsigned short)state;
- (unsigned short)type;
- (unsigned short)displayType;
- (unsigned short)entityType;
- (id)entityIdentifier;
- (id)additionalInfo;
- (void).cxx_destruct;
- (id)initWithSocialGroupID:(id)a0 personLocalIdentifiers:(id)a1 personNames:(id)a2 localFactoryScore:(double)a3;
- (double)localFactoryScore;

@end
