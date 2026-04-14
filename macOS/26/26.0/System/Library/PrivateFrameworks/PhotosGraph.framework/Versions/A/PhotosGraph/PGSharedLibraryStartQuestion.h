@class NSString, NSDictionary;

@interface PGSharedLibraryStartQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSString *_entityIdentifier;
    double _localFactoryScore;
    NSDictionary *_additionalInfo;
}

- (unsigned short)state;
- (unsigned short)type;
- (unsigned short)displayType;
- (id)init;
- (unsigned short)entityType;
- (id)entityIdentifier;
- (id)additionalInfo;
- (void).cxx_destruct;
- (double)localFactoryScore;

@end
