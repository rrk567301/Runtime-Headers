@class NSString;

@interface IDSRegistrationEventTracingPNREvent : NSObject <IDSRegistrationEventTracingEvent> {
    void /* function */ name;
    void /* unknown type, empty encoding */ simUniqueIdentifier;
}

@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSimUniqueIdentifier:(id)a0;

@end
