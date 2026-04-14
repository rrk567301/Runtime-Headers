@class NSMapTable;

@interface ABActionAutovalidatorCache : NSObject

@property (retain, nonatomic) NSMapTable *entries;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)setAlwaysInvalidEntryForAction:(SEL)a0;
- (id)entryForAction:(SEL)a0;
- (id)setAlwaysValidlEntryForAction:(SEL)a0;
- (void)setEntry:(id)a0 forAction:(SEL)a1;
- (id)setMenuEntryWithSelector:(SEL)a0 forAction:(SEL)a1;
- (id)setSimpleSelector:(SEL)a0 forAction:(SEL)a1;

@end
