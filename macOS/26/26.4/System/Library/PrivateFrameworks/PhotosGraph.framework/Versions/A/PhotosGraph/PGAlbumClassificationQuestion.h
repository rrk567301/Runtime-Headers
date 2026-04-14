@class NSDictionary, NSString;

@interface PGAlbumClassificationQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
}

- (unsigned short)entityType;
- (id)additionalInfo;
- (void).cxx_destruct;
- (unsigned short)displayType;
- (unsigned short)type;
- (unsigned short)state;
- (id)entityIdentifier;
- (id)initWithAlbumUUID:(id)a0 localFactoryScore:(double)a1;
- (double)localFactoryScore;

@end
