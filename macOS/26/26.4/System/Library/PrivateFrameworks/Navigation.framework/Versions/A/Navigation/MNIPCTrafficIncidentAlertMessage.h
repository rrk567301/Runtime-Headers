@class NSString, GEORouteIncident;

@interface MNIPCTrafficIncidentAlertMessage : MNIPCMessage

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) GEORouteIncident *incident;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryValue;

@end
