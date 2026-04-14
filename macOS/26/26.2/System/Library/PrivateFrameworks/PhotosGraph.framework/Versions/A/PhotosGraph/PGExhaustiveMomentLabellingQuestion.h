@class NSDictionary, NSString;

@interface PGExhaustiveMomentLabellingQuestion : PGSurveyQuestion {
    unsigned short _entityType;
    unsigned short _state;
    NSDictionary *_additionalInfo;
    double _localFactoryScore;
    NSString *_entityIdentifier;
}

- (unsigned short)state;
- (id)additionalInfo;
- (unsigned short)type;
- (void).cxx_destruct;
- (unsigned short)entityType;
- (id)entityIdentifier;
- (unsigned short)displayType;
- (id)initWithMomentUUID:(id)a0 localFactoryScore:(double)a1 meaningLabels:(id)a2;
- (double)localFactoryScore;

@end
