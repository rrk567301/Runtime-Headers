@class NSDictionary, NSString;

@interface PGSocialGroupsQuestion : PGSurveyQuestion {
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
- (id)initWithSocialGroupID:(id)a0 personLocalIdentifiers:(id)a1 personNames:(id)a2 localFactoryScore:(double)a3;
- (double)localFactoryScore;

@end
