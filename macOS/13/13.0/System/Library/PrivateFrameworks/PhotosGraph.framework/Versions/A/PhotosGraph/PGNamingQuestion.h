@class NSString, NSDictionary, PHPerson;

@interface PGNamingQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
}

@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) PHPerson *person;

+ (id)questionForPerson:(id)a0;

- (void).cxx_destruct;
- (unsigned short)state;
- (unsigned short)type;
- (void)remove;
- (unsigned short)displayType;
- (id)additionalInfo;
- (unsigned short)entityType;
- (id)entityIdentifier;
- (void)persistWithCreationDate:(id)a0 questionVersion:(short)a1;
- (double)localFactoryScore;
- (id)initWithPerson:(id)a0 contactIdentifier:(id)a1 localFactoryScore:(double)a2;
- (id)initWithConfirmedPerson:(id)a0 contactIdentifier:(id)a1 localFactoryScore:(double)a2;
- (id)_additionalInfoFromContactIdentifier:(id)a0;
- (void)legacyPersist;
- (void)legacyRemove;
- (id)_personForContactSuggestion;

@end
