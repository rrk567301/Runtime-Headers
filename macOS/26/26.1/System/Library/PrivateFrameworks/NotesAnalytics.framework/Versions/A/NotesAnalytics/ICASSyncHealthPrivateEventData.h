@class NSString;

@interface ICASSyncHealthPrivateEventData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;
@property (class, readonly, nonatomic) BOOL requiresTrackingConsent;

@property (readonly, nonatomic) NSString *syncHealthPrivateSessionID;


- (void).cxx_destruct;
- (id)toDict;
- (id)initWithSyncHealthPrivateSessionID:(id)a0;

@end
