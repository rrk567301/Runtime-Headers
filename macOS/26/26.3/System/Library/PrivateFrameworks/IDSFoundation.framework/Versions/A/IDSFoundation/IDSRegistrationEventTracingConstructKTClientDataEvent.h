@class NSString;

@interface IDSRegistrationEventTracingConstructKTClientDataEvent : NSObject <IDSRegistrationEventTracingEvent> {
    void /* function */ name;
    void /* unknown type, empty encoding */ registerID;
}

@property (nonatomic, copy) NSString *name;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRegisterID:(id)a0;

@end
