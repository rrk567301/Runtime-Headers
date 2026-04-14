@class NSString, NSDictionary, PHPerson;

@interface PGNamingQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
}

@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) PHPerson *person;

- (id)additionalInfo;
- (unsigned short)type;
- (unsigned short)state;
- (unsigned short)displayType;
- (void).cxx_destruct;
- (id)entityIdentifier;
- (void)remove;
- (unsigned short)entityType;
- (void)persistWithCreationDate:(id)a0 questionVersion:(short)a1;
- (id)_additionalInfoFromContactIdentifier:(id)a0 serviceManager:(id)a1;
- (id)_personForContactSuggestion;
- (id)initWithConfirmedPerson:(id)a0 contactIdentifier:(id)a1 localFactoryScore:(double)a2 serviceManager:(id)a3;
- (id)initWithPerson:(id)a0 contactIdentifier:(id)a1 localFactoryScore:(double)a2 serviceManager:(id)a3;
- (double)localFactoryScore;

@end
