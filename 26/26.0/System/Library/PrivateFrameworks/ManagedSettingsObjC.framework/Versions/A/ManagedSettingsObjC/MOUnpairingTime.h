@class NSString, NSNumber;

@interface MOUnpairingTime : NSObject <MOPersistable>

@property (readonly, nonatomic) id persistableValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) long long policy;
@property (readonly) NSNumber *hour;

+ (id)initializeWithPersistableValue:(id)a0;
+ (id)hourPolicyWithHour:(id)a0;
+ (BOOL)isValidPersistableRepresentation:(id)a0;
+ (id)nonePolicy;

@end
