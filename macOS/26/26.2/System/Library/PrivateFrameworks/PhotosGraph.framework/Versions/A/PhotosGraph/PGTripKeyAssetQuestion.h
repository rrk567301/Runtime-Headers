@class NSDictionary, NSString;

@interface PGTripKeyAssetQuestion : PGSurveyQuestion {
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
- (id)initWithKeyAssetUUID:(id)a0 tripName:(id)a1 isLongTrip:(BOOL)a2 localFactoryScore:(double)a3;
- (double)localFactoryScore;

@end
