@class NSDictionary, NSString;

@interface PGExhaustiveMomentLabellingQuestion : PGSurveyQuestion {
    unsigned short _entityType;
    unsigned short _state;
    NSDictionary *_additionalInfo;
    double _localFactoryScore;
    NSString *_entityIdentifier;
}

- (unsigned short)state;
- (unsigned short)type;
- (unsigned short)displayType;
- (unsigned short)entityType;
- (id)entityIdentifier;
- (id)additionalInfo;
- (void).cxx_destruct;
- (id)initWithMomentUUID:(id)a0 localFactoryScore:(double)a1 meaningLabels:(id)a2;
- (double)localFactoryScore;

@end
