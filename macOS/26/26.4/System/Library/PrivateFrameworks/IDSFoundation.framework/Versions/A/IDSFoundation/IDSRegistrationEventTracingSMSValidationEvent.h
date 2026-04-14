@class NSString;

@interface IDSRegistrationEventTracingSMSValidationEvent : NSObject <IDSRegistrationEventTracingEvent> {
    void /* function */ name;
    void /* unknown type, empty encoding */ mechanismType;
}

@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMechanismType:(long long)a0;

@end
