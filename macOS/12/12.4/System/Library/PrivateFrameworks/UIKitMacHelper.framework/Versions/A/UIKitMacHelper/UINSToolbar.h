@class NSString, NSMutableDictionary, NSArray, UINSSceneViewController;

@interface UINSToolbar : NSToolbar <NSToolbarDelegate, UINSToolbar> {
    NSMutableDictionary *_toolbarItemMapping;
    NSArray *_itemIdentifiers;
}

@property (weak, nonatomic) UINSSceneViewController *backingSceneViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *centeredItemIdentifier;
@property (nonatomic) BOOL autoHidesToolbarInFullScreen;

@end
