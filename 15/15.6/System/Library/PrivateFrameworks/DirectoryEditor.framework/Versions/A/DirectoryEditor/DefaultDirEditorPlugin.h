@class DEDragReceiverView, NSSegmentedControl, NSPopUpButton, NSSplitView, NSButton, NSDictionary, NSImageView, NSMutableDictionary, NSMutableArray, NSString, NSTabView, NSOutlineView, NSTextView, NSData, NSView, NSTextField, NSPanel;

@interface DefaultDirEditorPlugin : DirEditorPlugin {
    NSOutlineView *_outlineView;
    NSSplitView *_splitView;
    NSTabView *_attributeValueDetailTabView;
    NSTextView *_attributeValueDetailTextView;
    NSTextView *_attributeValueDetailDataTextView;
    DEDragReceiverView *_attributeValueDetailDataDragReceiverView;
    NSImageView *_attributeValueDetailImageView;
    NSView *_attributeValueDetailContainerView;
    NSSegmentedControl *_attributeValueAddRemoveSegmented;
    NSPopUpButton *_attributeValueTypePopUp;
    NSSegmentedControl *_attributeValueTypeSegmented;
    NSTextField *_attributeDataHintMessageTextField;
    NSPanel *_newAttributeSheet;
    NSPopUpButton *_newAttributeSheetAttrPopup;
    NSTextField *_newAttributeSheetNativeTextField;
    NSButton *_newAttributeSheetOKButton;
    NSButton *_newAttributeSheetCancelButton;
    NSDictionary *_attributes;
    NSMutableDictionary *_mutableAttributes;
    NSMutableArray *_retainedOutlineViewObjects;
    NSDictionary *_attrValueTypeTabToMenuItemMapping;
    NSDictionary *_metaAttrStringAttrs;
    char _outlineViewSelectionIsChanging;
}

@property char selectedRecordIsEditable;
@property char selectedAttributeIsEditable;
@property char selectedAttributeIsRemovable;
@property char textFieldDirty;
@property char dataFieldDirty;
@property char currentAttrValueIsString;
@property char currentAttrValueIsXMLPlist;
@property char currentAttrValueIsImage;
@property (retain) NSString *currentAttrValueType;
@property (retain) NSData *draggedInFileData;

+ (char)recordTypeSupported:(id)a0;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)outlineViewSelectionIsChanging:(id)a0;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (id)outlineView:(id)a0 dataCellForTableColumn:(id)a1 item:(id)a2;
- (char)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 objectValueForTableColumn:(id)a1 byItem:(id)a2;
- (void)outlineViewSelectionDidChange:(id)a0;
- (void)textDidChange:(id)a0;
- (void)textDidEndEditing:(id)a0;
- (id)displayStringForAttributeValue:(id)a0;
- (void)loadTabWithIdentifier:(id)a0 forRecords:(id)a1 ofType:(id)a2 isNewRecord:(char)a3 isEditable:(char)a4;
- (void)addAttributeMenuItemSelected:(id)a0;
- (void)addRemoveAttrSegmentCtrlHit:(id)a0;
- (void)addValueMenuItemSelected:(id)a0;
- (void)attributeImageValueChanged:(id)a0;
- (char)attributeIsReadOnly:(id)a0;
- (id)dragTypesForViewToRegisterFor:(id)a0;
- (char)handleDropOfType:(id)a0 withPasteboard:(id)a1;
- (void)newAttributeSheetButtonHit:(id)a0;
- (void)populateSelectedAttributeValue;
- (void)recordUnsavedEdits;
- (id)recordsAfterEditing;
- (void)removeButtonHit:(id)a0;
- (char)tabWithIdentifierCanEdit:(id)a0;
- (void)viewAttrValueAsPopUpChanged:(id)a0;
- (void)viewAttrValueAsSegmentedChanged:(id)a0;

@end
