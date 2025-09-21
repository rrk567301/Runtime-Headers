@class NSString;

@interface _PFTBoundedQueueingStrategy : NSObject <PFTQueueingStrategy> {
    unsigned long long _capacity;
    id /* block */ _overflowHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
