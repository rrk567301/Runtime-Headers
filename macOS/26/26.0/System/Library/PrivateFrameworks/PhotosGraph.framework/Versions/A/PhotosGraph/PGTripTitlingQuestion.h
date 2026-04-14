@class NSString, NSDictionary;

@interface PGTripTitlingQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSString *_entityIdentifier;
    double _localFactoryScore;
    NSDictionary *_additionalInfo;
}

- (unsigned short)state;
- (unsigned short)type;
- (unsigned short)displayType;
- (unsigned short)entityType;
- (id)entityIdentifier;
- (id)additionalInfo;
- (void).cxx_destruct;
- (id)initWithTripTitle:(id)a0 legacyTripTitle:(id)a1 keyAssetUUID:(id)a2 localFactoryScore:(double)a3 duplicatedTitles:(BOOL)a4;
- (double)localFactoryScore;

@end
