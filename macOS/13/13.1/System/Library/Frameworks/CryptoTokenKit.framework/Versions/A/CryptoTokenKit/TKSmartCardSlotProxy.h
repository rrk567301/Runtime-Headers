@class TKSmartCardSlot, NSHashTable;

@interface TKSmartCardSlotProxy : NSObject <TKProtocolSmartCardSlotNotification> {
    TKSmartCardSlot *_slot;
}

@property (readonly) NSHashTable *cards;

- (void).cxx_destruct;
- (id)initWithSlot:(id)a0;
- (void)notifyWithParameters:(id)a0 reply:(id /* block */)a1;
- (void)cardSessionRequested;

@end
