@class NSString;

@interface IDSRegistrationEventTracingConstructKTClientDataEvent : NSObject <IDSRegistrationEventTracingEvent> {
    void /* function */ name;
    void /* unknown type, empty encoding */ registerID;
}

@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRegisterID:(id)a0;

@end
