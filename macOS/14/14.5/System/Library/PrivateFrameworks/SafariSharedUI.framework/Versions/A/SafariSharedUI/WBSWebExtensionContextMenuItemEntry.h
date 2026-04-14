@class WBSWebExtensionContextMenuItemInfo, NSMutableOrderedSet, NSObject;
@protocol NSCopying;

@interface WBSWebExtensionContextMenuItemEntry : NSObject

@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (retain, nonatomic) WBSWebExtensionContextMenuItemInfo *info;
@property (weak, nonatomic) WBSWebExtensionContextMenuItemEntry *parentEntry;
@property (readonly, nonatomic) NSMutableOrderedSet *children;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)performWithSelfAndChildren:(id /* block */)a0;

@end
