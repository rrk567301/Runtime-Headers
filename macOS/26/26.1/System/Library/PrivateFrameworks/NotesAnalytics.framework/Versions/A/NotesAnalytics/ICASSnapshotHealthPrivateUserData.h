@class NSString;

@interface ICASSnapshotHealthPrivateUserData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;
@property (class, readonly, nonatomic) BOOL requiresTrackingConsent;

@property (readonly, nonatomic) NSString *snapshotHealthPrivateUserID;


- (void).cxx_destruct;
- (id)toDict;
- (id)initWithSnapshotHealthPrivateUserID:(id)a0;

@end
