@class _PFMulticasterReceiverList;

@interface _PFMulticasterMessageReceivers : NSObject <PFMulticasterDistributionList> {
    _PFMulticasterReceiverList *_strongReceivers;
    _PFMulticasterReceiverList *_weakReceivers;
}

- (unsigned long long)count;
- (void).cxx_destruct;
- (void)enumerateReceiversWithBlock:(id /* block */)a0;
- (id)initWithStrongReceivers:(id)a0 weakReceivers:(id)a1;

@end
