@class NSString;

@interface PXFavoriteMemoriesAction : PXMemoriesAction {
    NSString *_localizedActionName;
    NSString *_actionSystemImageName;
}

@property (readonly, nonatomic, getter=isFavorite) char favorite;

+ (id)menuTitleForMemories:(id)a0;
+ (char)toggledValueForMemories:(id)a0;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)actionSystemImageName;
- (id)initWithMemories:(id)a0;
- (id)initWithMemories:(id)a0 favorite:(char)a1;
- (id)localizedActionName;

@end
