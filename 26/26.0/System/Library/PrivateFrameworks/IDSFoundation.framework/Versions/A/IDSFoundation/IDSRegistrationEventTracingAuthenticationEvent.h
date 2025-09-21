@class NSString;

@interface IDSRegistrationEventTracingAuthenticationEvent : NSObject <IDSRegistrationEventTracingEvent> {
    void /* function */ name;
    void /* unknown type, empty encoding */ authenticationType;
}

@property (nonatomic, copy) NSString *name;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAuthenticationType:(id)a0;

@end
