@class NSDictionary, NSString;

@interface PGLocationRepresentativeAssetQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
}

- (unsigned short)state;
- (unsigned short)type;
- (unsigned short)displayType;
- (unsigned short)entityType;
- (id)entityIdentifier;
- (id)additionalInfo;
- (void).cxx_destruct;
- (id)initWithAssetUUID:(id)a0 locationName:(id)a1;

@end
