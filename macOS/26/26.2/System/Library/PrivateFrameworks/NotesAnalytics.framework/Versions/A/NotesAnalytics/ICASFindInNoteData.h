@class NSString, NSNumber;

@interface ICASFindInNoteData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;
@property (class, readonly, nonatomic) BOOL requiresTrackingConsent;

@property (readonly, nonatomic) NSNumber *wasSearchQueryEntered;


- (void).cxx_destruct;
- (id)toDict;
- (id)initWithWasSearchQueryEntered:(id)a0;

@end
