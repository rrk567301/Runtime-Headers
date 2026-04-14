@class NSString;

@interface ICASSyncHealthPrivateDeviceData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;
@property (class, readonly, nonatomic) BOOL requiresTrackingConsent;

@property (readonly, nonatomic) NSString *syncHealthPrivateDeviceID;


- (void).cxx_destruct;
- (id)toDict;
- (id)initWithSyncHealthPrivateDeviceID:(id)a0;

@end
