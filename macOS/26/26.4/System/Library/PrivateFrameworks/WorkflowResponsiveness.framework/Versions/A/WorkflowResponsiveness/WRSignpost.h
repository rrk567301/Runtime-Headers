@class NSString, NSArray;

@interface WRSignpost : NSObject {
    BOOL _eventIdentifierIsSignpostID;
}

@property (readonly) NSString *subsystem;
@property (readonly) NSString *category;
@property (readonly) NSString *name;
@property (readonly) NSString *eventIdentifierFieldName;
@property (readonly) BOOL eventIdentifierIsSignpostID;
@property (readonly) NSString *individuationFieldName;
@property (readonly) NSArray *environmentFieldNames;
@property (readonly) BOOL networkBound;
@property (readonly) NSString *customEnvironmentCoreAnalyticsEventName;
@property (readonly) NSArray *diagnostics;
@property (readonly) int diagnosticThresholdCount;
@property (readonly) BOOL hasDiagnosticThresholdCount;
@property (readonly) double diagnosticThresholdIntervalSeconds;
@property (readonly) BOOL hasDiagnosticThresholdInterval;

- (id)debugDescription;
- (long long)compare:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithSubsystem:(id)a0 category:(id)a1 name:(id)a2 eventIdentifierFieldName:(id)a3 eventIdentifierIsSignpostId:(BOOL)a4 individuationFieldName:(id)a5 environmentFieldNames:(id)a6 networkBound:(BOOL)a7 customEnvironmentCoreAnalyticsEventName:(id)a8 diagnostics:(id)a9;

@end
