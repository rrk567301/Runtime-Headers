@class NSString, NSURL, PHCollection;
@protocol NSCopying, NSObject;

@interface PXNavigationListItem : NSObject <PXNavigationListItem>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *glyphImageName;
@property (readonly, nonatomic) NSString *accessoryTitle;
@property (readonly, nonatomic) NSString *accessoryGlyphImageName;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic, getter=isDraggable) BOOL draggable;
@property (readonly, nonatomic, getter=isReorderable) BOOL reorderable;
@property (readonly, nonatomic, getter=isRemovable) BOOL removable;
@property (readonly, nonatomic, getter=isRenamable) BOOL renamable;
@property (readonly, nonatomic, getter=isDeletable) BOOL deletable;
@property (readonly, nonatomic, getter=isExpandable) BOOL expandable;
@property (readonly, nonatomic) BOOL canRearrangeContent;
@property (readonly, nonatomic) BOOL defaultsToExpanded;
@property (readonly, nonatomic) unsigned long long lockState;
@property (readonly, nonatomic, getter=isGroup) BOOL group;
@property (readonly, nonatomic) BOOL displayInline;
@property (readonly, nonatomic, getter=isExpanded) BOOL expanded;
@property (readonly, nonatomic) long long indentationLevel;
@property (readonly, nonatomic) PHCollection *collection;
@property (readonly, copy, nonatomic) NSString *collectionIdentifier;
@property (readonly, nonatomic) id<NSCopying, NSObject> representedObject;
@property (readonly, copy, nonatomic) NSString *topLevelIdentifier;
@property (readonly, copy, nonatomic) NSString *accessibilityIdentifier;
@property (readonly, nonatomic) NSString *visualDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 title:(id)a1 accessoryTitle:(id)a2 reorderable:(BOOL)a3 topLevelIdentifier:(id)a4;
- (BOOL)isEqualToNavigationListItem:(id)a0;

@end
