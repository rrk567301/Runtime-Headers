@class NSArray, NSString, INCalendarEvent;

@interface INUpdateEventIntentResponse : INIntentResponse <INUpdateEventIntentResponseExport>

@property (readonly) long long code;
@property (copy) INCalendarEvent *updatedEvent;
@property (copy) NSArray *conflictingEventIdentifiers;
@property long long confirmationReason;
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
- (id)_initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithBackingStore:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (long long)_intentResponseCode;
- (long long)_codeWithName:(id)a0;
- (void)setPropertiesByName:(id)a0;

@end
