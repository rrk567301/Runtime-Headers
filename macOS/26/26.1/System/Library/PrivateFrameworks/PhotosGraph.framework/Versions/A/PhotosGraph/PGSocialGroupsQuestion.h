@class NSDictionary, NSString;

@interface PGSocialGroupsQuestion : PGSurveyQuestion {
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
- (id)initWithSocialGroupID:(id)a0 personLocalIdentifiers:(id)a1 personNames:(id)a2 localFactoryScore:(double)a3;
- (double)localFactoryScore;

@end
