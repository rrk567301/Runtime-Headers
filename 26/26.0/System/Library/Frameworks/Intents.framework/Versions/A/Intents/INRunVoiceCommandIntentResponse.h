@class NSString, NSDictionary, NSArray, NSNumber, INArchivedObject;

@interface INRunVoiceCommandIntentResponse : INIntentResponse <INRunVoiceCommandIntentResponseExport>

@property (readonly) long long code;
@property (copy) NSString *appBundleId;
@property long long intentCategory;
@property (copy) NSNumber *customResponsesDisabled;
@property (copy) NSString *responseTemplate;
@property (copy) NSDictionary *parameters;
@property (copy) NSString *verb;
@property (copy) INArchivedObject *underlyingIntent;
@property (copy) NSString *localizedAppName;
@property (copy) INArchivedObject *underlyingIntentResponse;
@property long long toggleState;
@property (copy) NSNumber *continueRunning;
@property (copy) NSNumber *interstitialDisabled;
@property (copy) NSString *underlyingIntentTitle;
@property (copy) NSArray *steps;
@property (copy) NSNumber *prefersExecutionOnCompanion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_appLaunchRequestedFromCode:(long long)a0;
+ (long long)_codeFromType:(int)a0 errorCode:(int)a1 appLaunchRequested:(BOOL)a2;
+ (int)_errorCodeFromCode:(long long)a0;
+ (int)_typeFromCode:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBackingStore:(id)a0;
- (id)init;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)propertiesByName;
- (long long)_codeWithName:(id)a0;
- (id)_initWithCode:(long long)a0 userActivity:(id)a1;
- (long long)_intentResponseCode;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (void)setPropertiesByName:(id)a0;

@end
