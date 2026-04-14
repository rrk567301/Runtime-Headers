@class NSMenu;

@interface _NSMenuKeyCacheEntry : NSObject

@property (weak, nonatomic) NSMenu *menu;
@property (nonatomic) long long item;
@property (nonatomic) unsigned int context;
@property (nonatomic) unsigned int eventMods;
@property (nonatomic) long long identifier;

- (void).cxx_destruct;

@end
