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
+ (long long)_codeFromType:(int)a0 errorCode:(int)a1 appLaunchRequested:(BOOL)a2;
+ (int)_typeFromCode:(long long)a0;
+ (int)_errorCodeFromCode:(long long)a0;
+ (BOOL)_appLaunchRequestedFromCode:(long long)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)propertiesByName;
- (id)_dictionaryRepresentation;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)_initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithBackingStore:(id)a0;
- (long long)_intentResponseCode;
- (long long)_codeWithName:(id)a0;
- (void)setPropertiesByName:(id)a0;

@end
