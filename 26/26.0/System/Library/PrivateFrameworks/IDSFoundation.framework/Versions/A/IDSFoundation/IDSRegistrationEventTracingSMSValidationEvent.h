@class NSString;

@interface IDSRegistrationEventTracingSMSValidationEvent : NSObject <IDSRegistrationEventTracingEvent> {
    void /* function */ name;
    void /* unknown type, empty encoding */ mechanismType;
}

@property (nonatomic, copy) NSString *name;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMechanismType:(long long)a0;

@end
