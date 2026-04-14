@class NSString;

@interface IDSRegistrationEventTracingAuthenticationEvent : NSObject <IDSRegistrationEventTracingEvent> {
    void /* function */ name;
    void /* unknown type, empty encoding */ authenticationType;
}

@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAuthenticationType:(id)a0;

@end
