@class NSArray;

@interface CalInMemoryBlockList : NSObject <CalBlockList> {
    void /* unknown type, empty encoding */ blockedEmails;
    void /* function */ blockedPhoneNumbers;
}

@property (nonatomic, copy) NSArray *blockedPhoneNumbers;
@property (nonatomic, readonly) BOOL isEmpty;

- (void).cxx_destruct;
- (id)init;
- (void)addBlockedEmail:(id)a0;
- (void)addBlockedPhoneNumber:(id)a0;
- (void)batchCachedEmails:(id)a0 phoneNumbers:(id)a1 completionHandler:(id /* block */)a2;
- (void)batchLookupEmails:(id)a0 phoneNumbers:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)cachedBlockedWithEmail:(id)a0;
- (BOOL)cachedBlockedWithPhoneNumber:(id)a0;
- (BOOL)isBlockedWithEmail:(id)a0;
- (BOOL)isBlockedWithPhoneNumber:(id)a0;

@end
