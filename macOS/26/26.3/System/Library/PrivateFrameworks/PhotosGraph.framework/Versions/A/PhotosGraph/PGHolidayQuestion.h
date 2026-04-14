@class NSDictionary, NSString;

@interface PGHolidayQuestion : PGSurveyQuestion {
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
- (id)initWithAssetUUID:(id)a0 holidayName:(id)a1 localizedHolidayName:(id)a2 localFactoryScore:(double)a3;
- (double)localFactoryScore;

@end
