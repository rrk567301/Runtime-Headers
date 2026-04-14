@interface _TtCVE8ContactsCSo14CNContactStore26FetchedChangeHistoryEvents22EventVisitorTranslator : NSObject <CNChangeHistoryEventVisitor> {
    void /* unknown type, empty encoding */ event;
}

- (void)visitUpdateContactEvent:(id)a0;
- (void)visitDropEverythingEvent:(id)a0;
- (void)visitAddContactEvent:(id)a0;
- (void)visitDeleteContactEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
