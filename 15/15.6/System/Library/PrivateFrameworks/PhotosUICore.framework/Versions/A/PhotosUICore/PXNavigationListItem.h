@class NSString, NSURL, PXProgrammaticNavigationDestination, PHCollection;

@interface PXNavigationListItem : NSObject <PXNavigationListItem>

@property (nonatomic) unsigned long long lockState;
@property (readonly, nonatomic) long long itemCount;
@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *accessoryTitle;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSString *glyphImageName;
@property (readonly, nonatomic) NSString *accessoryGlyphImageName;
@property (readonly, nonatomic, getter=isEmbeddedGlyph) char embeddedGlyph;
@property (readonly, nonatomic, getter=isDraggable) char draggable;
@property (readonly, nonatomic, getter=isReorderable) char reorderable;
@property (readonly, nonatomic, getter=isRemovable) char removable;
@property (readonly, nonatomic, getter=isRenamable) char renamable;
@property (readonly, nonatomic, getter=isDeletable) char deletable;
@property (readonly, nonatomic, getter=isExpandable) char expandable;
@property (readonly, nonatomic, getter=isGroup) char group;
@property (readonly, nonatomic, getter=isExpanded) char expanded;
@property (readonly, nonatomic) long long indentationLevel;
@property (readonly, nonatomic) PHCollection *collection;
@property (readonly, nonatomic) id representedObject;
@property (readonly, nonatomic) long long style;
@property (copy, nonatomic) NSString *badgeString;
@property (readonly, nonatomic) NSString *visualDescription;
@property (readonly, nonatomic) PXProgrammaticNavigationDestination *destination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 title:(id)a1 itemCount:(long long)a2 containerIdentifier:(id)a3;
- (char)isEqualToNavigationListItem:(id)a0;

@end
