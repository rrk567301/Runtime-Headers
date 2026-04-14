@class NSString, NSNumber;

@interface ICASDocScanSnapshotItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;
@property (class, readonly, nonatomic) BOOL requiresTrackingConsent;

@property (readonly, nonatomic) NSNumber *docScanLength;


- (void).cxx_destruct;
- (id)toDict;
- (id)initWithDocScanLength:(id)a0;

@end
