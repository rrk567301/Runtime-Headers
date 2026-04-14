@class NSString, NSDictionary;

@interface PGHighlightTitlingQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSString *_entityIdentifier;
    double _localFactoryScore;
    NSDictionary *_additionalInfo;
}

- (id)additionalInfo;
- (unsigned short)type;
- (unsigned short)state;
- (unsigned short)displayType;
- (void).cxx_destruct;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (id)initWithHighlightTitle:(id)a0 legacyHighlightTitle:(id)a1 keyAssetUUID:(id)a2 localFactoryScore:(double)a3 duplicatedTitles:(BOOL)a4;
- (double)localFactoryScore;

@end
