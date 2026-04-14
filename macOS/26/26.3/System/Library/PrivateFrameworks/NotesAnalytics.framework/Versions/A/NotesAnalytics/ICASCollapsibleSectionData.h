@class NSString, NSNumber;

@interface ICASCollapsibleSectionData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;
@property (class, readonly, nonatomic) BOOL requiresTrackingConsent;

@property (readonly, nonatomic) NSNumber *sectionAffordanceExposures;
@property (readonly, nonatomic) NSNumber *sectionAffordanceUsages;


- (void).cxx_destruct;
- (id)toDict;
- (id)initWithSectionAffordanceExposures:(id)a0 sectionAffordanceUsages:(id)a1;

@end
