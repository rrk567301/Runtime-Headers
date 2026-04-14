@class NSString, NSDictionary;

@interface PGHighlightTitlingQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSString *_entityIdentifier;
    double _localFactoryScore;
    NSDictionary *_additionalInfo;
}

- (unsigned short)entityType;
- (id)additionalInfo;
- (void).cxx_destruct;
- (unsigned short)displayType;
- (unsigned short)type;
- (unsigned short)state;
- (id)entityIdentifier;
- (id)initWithHighlightTitle:(id)a0 legacyHighlightTitle:(id)a1 keyAssetUUID:(id)a2 localFactoryScore:(double)a3 duplicatedTitles:(BOOL)a4;
- (double)localFactoryScore;

@end
