@class NSArray;

@interface CNHandleExpander : NSObject

@property (retain, nonatomic) NSArray *incomingAddresses;
@property (retain, nonatomic) NSArray *expandedAddresses;

+ (id)contactStoreForFetchingContacts;

- (void).cxx_destruct;
- (void)expandHandles;
- (id)initWithHandles:(id)a0;
- (id)expandedHandles;

@end
