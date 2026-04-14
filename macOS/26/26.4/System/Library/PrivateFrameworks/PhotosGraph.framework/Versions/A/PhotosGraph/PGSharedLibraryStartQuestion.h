@class NSString, NSDictionary;

@interface PGSharedLibraryStartQuestion : PGSurveyQuestion {
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
- (id)init;
- (unsigned short)state;
- (id)entityIdentifier;
- (double)localFactoryScore;

@end
