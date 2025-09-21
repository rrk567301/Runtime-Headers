@class NSString, NSArray, NSColor, NSObject, NSImage, NSMutableArray, NSNumber;
@protocol OS_dispatch_queue;

@interface SMCustomizeTreeNode_Client : NSObject

@property char selectedItemsStillSizing;
@property (retain) NSMutableArray *childNodes;
@property (retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) char isLeaf;
@property char sizeIsAvailable;
@property (readonly) char preliminarySizeIsAvailable;
@property (readonly) NSColor *sizeTextColor;
@property (retain) NSColor *overrideSizeTextColor;
@property (readonly, weak) NSArray *childNodesCopy;
@property (copy) NSString *name;
@property (retain) NSColor *nameTextColor;
@property (copy) NSString *extraInfo;
@property char displaysExtraInfo;
@property (copy) NSNumber *size;
@property (copy) NSNumber *localNodeSize;
@property long long userSelected;
@property char performingSelectionUpdates;
@property char userEditable;
@property char canSelectOnlyParent;
@property char accountForLocalNodeSize;
@property char allowMixedStateWhenAllChildrenSelected;
@property char selectWhenParentHasMixedState;
@property char selectionDisabled;
@property char enabled;
@property char needsAttention;
@property unsigned long long textMode;
@property unsigned long long type;
@property (retain) NSImage *image;
@property (retain) SMCustomizeTreeNode_Client *parent;
@property (retain) id representedObject;

+ (id)keyPathsForValuesAffectingChildNodesCopy;
+ (id)keyPathsForValuesAffectingPreliminarySizeIsAvailable;
+ (id)keyPathsForValuesAffectingSizeTextColor;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addChild:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeChild:(id)a0;
- (void)evaluateState;
- (void)addChild:(id)a0 andEvaluateState:(char)a1;
- (void)changeSelectedStateOfAllChildrenTo:(long long)a0;
- (id)childWithRepresentedObject:(id)a0;
- (void)evaluateSize;
- (id)initWithName:(id)a0 ofType:(unsigned long long)a1 selected:(char)a2 image:(id)a3 size:(id)a4 andRepresentedObject:(id)a5;
- (long long)nodeStateBasedOnChildren;
- (void)removeAllChildren;
- (void)sortChildernUsingComparator:(id /* block */)a0;

@end
