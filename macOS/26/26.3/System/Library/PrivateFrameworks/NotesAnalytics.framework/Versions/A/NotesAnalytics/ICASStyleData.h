@class NSString, ICASStyleType;

@interface ICASStyleData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;
@property (class, readonly, nonatomic) BOOL requiresTrackingConsent;

@property (readonly, nonatomic) ICASStyleType *styleType;


- (void).cxx_destruct;
- (id)initWithStyleType:(id)a0;
- (id)toDict;

@end
