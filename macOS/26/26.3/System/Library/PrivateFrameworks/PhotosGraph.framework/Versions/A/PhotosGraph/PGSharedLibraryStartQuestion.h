@class NSString, NSDictionary;

@interface PGSharedLibraryStartQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSString *_entityIdentifier;
    double _localFactoryScore;
    NSDictionary *_additionalInfo;
}

- (id)additionalInfo;
- (unsigned short)type;
- (id)init;
- (unsigned short)state;
- (unsigned short)displayType;
- (void).cxx_destruct;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (double)localFactoryScore;

@end
