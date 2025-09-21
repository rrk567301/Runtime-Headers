@protocol CalBlockList;

@interface CalBlockListWrapper : NSObject <CalBlockList> {
    void /* unknown type, empty encoding */ blockList;
}

@property (class, nonatomic, readonly) id<CalBlockList> sharedBlockList;

@property (nonatomic, readonly) BOOL isEmpty;

- (id)init;
- (void).cxx_destruct;
- (void)batchLookupEmails:(id)a0 phoneNumbers:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)isBlockedWithEmail:(id)a0;
- (BOOL)isBlockedWithPhoneNumber:(id)a0;

@end
