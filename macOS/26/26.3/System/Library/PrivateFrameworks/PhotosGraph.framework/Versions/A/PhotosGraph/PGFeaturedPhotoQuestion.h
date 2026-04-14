@class NSDictionary, NSString;

@interface PGFeaturedPhotoQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
}

- (id)additionalInfo;
- (unsigned short)type;
- (unsigned short)state;
- (unsigned short)displayType;
- (void).cxx_destruct;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (id)initWithAssetUUID:(id)a0 suggestionType:(unsigned short)a1 suggestionSubtype:(unsigned short)a2;
- (BOOL)isEquivalentToQuestion:(id)a0;

@end
