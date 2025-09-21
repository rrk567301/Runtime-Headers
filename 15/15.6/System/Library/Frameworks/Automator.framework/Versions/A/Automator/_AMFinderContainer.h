@class SBObject;

@interface _AMFinderContainer : _AMFinderItem

@property (readonly, copy) SBObject *entireContents;
@property (readonly) char expandable;
@property char expanded;
@property char completelyExpanded;
@property (readonly, copy) SBObject *containerWindow;

- (id)items;
- (id)packages;
- (id)containers;
- (id)files;
- (id)folders;
- (id)aliasFiles;
- (id)applicationFiles;
- (id)clippings;
- (id)documentFiles;
- (id)internetLocationFiles;

@end
