@class NSDictionary, NSString;

@interface PGPublicEventQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    double _localFactoryScore;
}

- (id)additionalInfo;
- (unsigned short)type;
- (unsigned short)state;
- (unsigned short)displayType;
- (void).cxx_destruct;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (id)initWithAssetUUID:(id)a0 publicEventMUID:(unsigned long long)a1 publicEventName:(id)a2 publicEventSource:(id)a3 localFactoryScore:(double)a4;
- (BOOL)isEquivalentToPersistedQuestion:(id)a0;
- (double)localFactoryScore;

@end
