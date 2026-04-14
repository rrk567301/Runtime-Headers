@class NSDictionary, NSString;

@interface PGFeaturedPhotoQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
}

- (unsigned short)entityType;
- (id)additionalInfo;
- (void).cxx_destruct;
- (unsigned short)displayType;
- (unsigned short)type;
- (unsigned short)state;
- (id)entityIdentifier;
- (id)initWithAssetUUID:(id)a0 suggestionType:(unsigned short)a1 suggestionSubtype:(unsigned short)a2;
- (BOOL)isEquivalentToQuestion:(id)a0;

@end
