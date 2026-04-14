@class SBObject;

@interface _AMFinderContainer : _AMFinderItem

@property (readonly, copy) SBObject *entireContents;
@property (readonly) BOOL expandable;
@property BOOL expanded;
@property BOOL completelyExpanded;
@property (readonly, copy) SBObject *containerWindow;

- (id)containers;
- (id)items;
- (id)packages;
- (id)files;
- (id)folders;
- (id)aliasFiles;
- (id)applicationFiles;
- (id)clippings;
- (id)documentFiles;
- (id)internetLocationFiles;

@end
