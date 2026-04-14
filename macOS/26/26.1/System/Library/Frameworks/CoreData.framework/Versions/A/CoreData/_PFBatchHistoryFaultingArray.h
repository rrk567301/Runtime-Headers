@class NSPersistentHistoryTransaction;

@interface _PFBatchHistoryFaultingArray : _PFBatchFaultingArray {
    NSPersistentHistoryTransaction *_transaction;
}

+ (Class)classForKeyedUnarchiver;

- (id)transaction;
- (void)_setTransaction:(id)a0;
- (Class)classForCoder;
- (id)initWithPFBatchFaultingArray:(id)a0;

@end
