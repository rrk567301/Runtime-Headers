@class NSString;

@interface PXFavoriteMemoriesAction : PXMemoriesAction {
    NSString *_localizedActionName;
    NSString *_actionSystemImageName;
}

@property (readonly, nonatomic, getter=isFavorite) BOOL favorite;

+ (BOOL)toggledValueForMemories:(id)a0;
+ (BOOL)currentValueForMemories:(id)a0;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)initWithMemories:(id)a0;
- (id)initWithMemories:(id)a0 favorite:(BOOL)a1;
- (id)localizedActionName;
- (id)actionSystemImageName;

@end
