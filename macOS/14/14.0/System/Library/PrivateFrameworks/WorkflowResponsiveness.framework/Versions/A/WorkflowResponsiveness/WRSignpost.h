@class NSString, NSArray;

@interface WRSignpost : NSObject

@property (readonly) NSString *subsystem;
@property (readonly) NSString *category;
@property (readonly) NSString *name;
@property (readonly) NSString *individuationFieldName;
@property (readonly) NSArray *environmentFieldNames;
@property (readonly) int diagnosticThresholdCount;
@property (readonly) BOOL hasDiagnosticThresholdCount;
@property (readonly) double diagnosticThresholdIntervalSeconds;
@property (readonly) BOOL hasDiagnosticThresholdInterval;

- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithSubsystem:(id)a0 category:(id)a1 name:(id)a2 individuationFieldName:(id)a3 environmentFieldNames:(id)a4 diagnosticThresholdCount:(int)a5 diagnosticThresholdIntervalSeconds:(double)a6;

@end
