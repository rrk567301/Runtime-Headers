@class TKSmartCardSlot, NSMutableArray, NSHashTable;

@interface TKSmartCardSlotProxy : NSObject <TKProtocolSmartCardSlotNotification> {
    TKSmartCardSlot *_slot;
    NSMutableArray *_queuedParameters;
}

@property (readonly) NSHashTable *cards;

- (id)initWithSlot:(id)a0;
- (void).cxx_destruct;
- (void)slotInitialized;
- (void)cardSessionRequested;
- (void)notifyWithParameters:(id)a0 reply:(id /* block */)a1;
- (void)processNotificationParameters:(id)a0;

@end
