@class NSString, NSDictionary, PHPerson;

@interface PGNamingQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
}

@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) PHPerson *person;

- (unsigned short)state;
- (unsigned short)type;
- (unsigned short)displayType;
- (void)remove;
- (unsigned short)entityType;
- (id)entityIdentifier;
- (id)additionalInfo;
- (void).cxx_destruct;
- (void)persistWithCreationDate:(id)a0 questionVersion:(short)a1;
- (id)_additionalInfoFromContactIdentifier:(id)a0 serviceManager:(id)a1;
- (id)_personForContactSuggestion;
- (id)initWithConfirmedPerson:(id)a0 contactIdentifier:(id)a1 localFactoryScore:(double)a2 serviceManager:(id)a3;
- (id)initWithPerson:(id)a0 contactIdentifier:(id)a1 localFactoryScore:(double)a2 serviceManager:(id)a3;
- (double)localFactoryScore;

@end
