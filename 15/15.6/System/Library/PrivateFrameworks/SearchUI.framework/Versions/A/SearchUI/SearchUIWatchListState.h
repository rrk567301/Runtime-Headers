@class NSString;

@interface SearchUIWatchListState : NSObject

@property (nonatomic) char isWatchListed;
@property (retain, nonatomic) NSString *watchListIdentifier;

- (void).cxx_destruct;
- (id)initWithResponse:(id)a0;
- (id)initWithIdentifier:(id)a0 watchListed:(char)a1;
- (id)initWithContainerResponse:(id)a0;
- (void)toggleStateWithCompletion:(id /* block */)a0;

@end
