@class CCSerializedSetMessage;

@interface CCSerializedSetItemRetriever : NSObject <CCItemRetriever> {
    CCSerializedSetMessage *_setMessage;
}

- (void).cxx_destruct;
- (BOOL)enumerateItemInstancesMatchingPredicate:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (BOOL)enumerateSharedItemsMatchingPredicate:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (id)initWithSetMessage:(id)a0;
- (id)singleItemInstanceMatchingPredicate:(id)a0 error:(id *)a1;
- (id)singleSharedItemMatchingPredicate:(id)a0 error:(id *)a1;

@end
