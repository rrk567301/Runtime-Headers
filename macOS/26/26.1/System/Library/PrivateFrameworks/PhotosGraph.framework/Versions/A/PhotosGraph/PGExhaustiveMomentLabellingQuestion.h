@class NSDictionary, NSString;

@interface PGExhaustiveMomentLabellingQuestion : PGSurveyQuestion {
    unsigned short _entityType;
    unsigned short _state;
    NSDictionary *_additionalInfo;
    double _localFactoryScore;
    NSString *_entityIdentifier;
}

- (unsigned short)entityType;
- (unsigned short)type;
- (id)additionalInfo;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (void).cxx_destruct;
- (unsigned short)state;
- (id)initWithMomentUUID:(id)a0 localFactoryScore:(double)a1 meaningLabels:(id)a2;
- (double)localFactoryScore;

@end
