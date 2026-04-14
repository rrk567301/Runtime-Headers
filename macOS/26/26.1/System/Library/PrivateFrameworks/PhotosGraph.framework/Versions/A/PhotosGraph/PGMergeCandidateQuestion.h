@class NSString, NSDictionary, PHPerson;

@interface PGMergeCandidateQuestion : PGSurveyQuestion {
    unsigned short _type;
    unsigned short _displayType;
    unsigned short _state;
    unsigned short _entityType;
    NSString *_entityIdentifier;
    double _score;
    NSDictionary *_additionalInfo;
}

@property (readonly, nonatomic) PHPerson *person;

- (void)remove;
- (unsigned short)entityType;
- (unsigned short)type;
- (id)additionalInfo;
- (unsigned long long)hash;
- (unsigned short)displayType;
- (double)score;
- (void)setScore:(double)a0;
- (id)entityIdentifier;
- (void).cxx_destruct;
- (unsigned short)state;
- (BOOL)isEqual:(id)a0;
- (id)initWithPerson:(id)a0 score:(double)a1;
- (BOOL)isEqualToQuestion:(id)a0;
- (void)persistWithCreationDate:(id)a0 questionVersion:(short)a1;

@end
