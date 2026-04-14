@class NSString, NSDictionary, NSData, NSNumber;

@interface WBSTestResultsReport : NSObject

@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) unsigned long long reportType;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *testIdentifier;
@property (readonly, nonatomic) NSString *testStage;
@property (readonly, nonatomic) NSNumber *errorCode;
@property (readonly, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) NSString *errorMessage;
@property (readonly, nonatomic) NSDictionary *performanceValues;
@property (readonly, nonatomic) NSData *resultsActual;
@property (readonly, nonatomic) NSData *resultsExpected;
@property (readonly, nonatomic) NSString *resultsExpectedName;
@property (readonly, nonatomic) NSString *resultsUniformTypeIdentifier;

+ (id)reportForActualResults:(id)a0 expectedResults:(id)a1 expectedResultsName:(id)a2 uniformTypeIdentifier:(id)a3 forStage:(id)a4 forTest:(id)a5 inBundle:(id)a6;
+ (id)reportForError:(id)a0 forStage:(id)a1 forTest:(id)a2 inBundle:(id)a3;
+ (id)reportForPerformance:(id)a0 forStage:(id)a1 forTest:(id)a2 inBundle:(id)a3;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;

@end
