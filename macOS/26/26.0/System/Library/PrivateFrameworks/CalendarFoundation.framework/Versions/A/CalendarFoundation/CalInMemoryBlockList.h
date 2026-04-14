@class NSArray;

@interface CalInMemoryBlockList : NSObject <CalBlockList> {
    void /* unknown type, empty encoding */ blockedEmails;
    void /* function */ blockedPhoneNumbers;
}

@property (nonatomic, copy) NSArray *blockedPhoneNumbers;
@property (nonatomic, readonly) BOOL isEmpty;

- (id)init;
- (void).cxx_destruct;
- (void)addBlockedEmail:(id)a0;
- (void)addBlockedPhoneNumber:(id)a0;
- (void)batchLookupEmails:(id)a0 phoneNumbers:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)isBlockedWithEmail:(id)a0;
- (BOOL)isBlockedWithPhoneNumber:(id)a0;

@end
