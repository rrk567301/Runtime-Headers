@class NSString, ABAddressBook;
@protocol ABCardCollectionViewDelegate, ABActionManagerDelegate;

@interface ABActionManager : NSObject

@property (retain, nonatomic) id transitionProvider;
@property (retain) id<ABCardCollectionViewDelegate> cardCollectionViewDelegate;
@property (copy) NSString *personUniqueId;
@property (retain) NSString *identifier;
@property (weak) id<ABActionManagerDelegate> delegate;
@property (readonly) ABAddressBook *addressBook;

- (void).cxx_destruct;
- (char)validateMenuItem:(id)a0;
- (char)hasActionsForProperty:(id)a0;
- (void)performActionForMenuItem:(id)a0;

@end
