@class NSString, NSMutableDictionary;

@interface SMTreeViewDelegate : NSObject <NSOutlineViewDelegate>

@property (retain) NSMutableDictionary *prototypeCellViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (double)outlineView:(id)a0 heightOfRowByItem:(id)a1;
- (BOOL)outlineView:(id)a0 shouldSelectItem:(id)a1;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (id)viewIdentiferAppropriateToItem:(id)a0;
- (id)prototypeViewForIdentifier:(id)a0 inOutlineView:(id)a1;

@end
