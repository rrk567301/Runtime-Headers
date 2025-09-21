@class NSString, NSDictionary;

@interface PGTripTitlingQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSString *_entityIdentifier;
    double _localFactoryScore;
    NSDictionary *_additionalInfo;
}

- (void).cxx_destruct;
- (unsigned short)state;
- (unsigned short)type;
- (unsigned short)displayType;
- (id)additionalInfo;
- (unsigned short)entityType;
- (id)entityIdentifier;
- (id)initWithTripTitle:(id)a0 legacyTripTitle:(id)a1 keyAssetUUID:(id)a2 localFactoryScore:(double)a3 duplicatedTitles:(char)a4;
- (double)localFactoryScore;

@end
