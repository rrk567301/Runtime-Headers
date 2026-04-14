@class NSArray;
@protocol IMAPFetchMailboxStatusOperationDelegate;

@interface IMAPFetchMailboxStatusOperation : IMAPNetworkTaskOperation

@property (readonly, weak, nonatomic) id<IMAPFetchMailboxStatusOperationDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *mailboxNames;
@property (readonly, nonatomic) unsigned long long dataItems;

- (void)main;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMailboxName:(id)a0;
- (id)_descriptionHidingPII:(BOOL)a0;
- (id)initWithMailboxNames:(id)a0 dataItems:(unsigned long long)a1 delegate:(id)a2;

@end
