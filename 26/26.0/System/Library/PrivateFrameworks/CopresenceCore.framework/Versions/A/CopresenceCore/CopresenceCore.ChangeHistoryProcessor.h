@interface CopresenceCore.ChangeHistoryProcessor : NSObject <CNChangeHistoryEventVisitor> {
    void /* unknown type, empty encoding */ onContactDeleted;
}

- (void)visitDeleteContactEvent:(id)a0;
- (void)visitDropEverythingEvent:(id)a0;
- (void)visitUpdateContactEvent:(id)a0;
- (id)init;
- (void)visitAddContactEvent:(id)a0;
- (void).cxx_destruct;

@end
