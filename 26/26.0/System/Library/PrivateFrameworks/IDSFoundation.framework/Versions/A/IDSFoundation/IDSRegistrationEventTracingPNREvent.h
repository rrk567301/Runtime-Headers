@class NSString;

@interface IDSRegistrationEventTracingPNREvent : NSObject <IDSRegistrationEventTracingEvent> {
    void /* function */ name;
    void /* unknown type, empty encoding */ simUniqueIdentifier;
}

@property (nonatomic, copy) NSString *name;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSimUniqueIdentifier:(id)a0;

@end
