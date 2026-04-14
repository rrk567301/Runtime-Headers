@class NSDictionary, NSString;

@interface PGRelationshipQuestion : PGSurveyQuestion {
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
- (id)initWithRelationshipLabel:(id)a0 personUUID:(id)a1 localFactoryScore:(double)a2;

@end
