@class NSURL;

@interface FI_TFENodePBWriterForDrag : FI_TFENodePasteboardItem {
    NSURL *originalCryptexURL;
}

@property (nonatomic) BOOL isSidebarItem;
@property (nonatomic) struct vector<TTypedData, std::allocator<TTypedData>> { struct TTypedData *__begin_; struct TTypedData *__end_; struct { struct TTypedData *__cap_; } ; } clippingData;
@property (nonatomic) long long windowNumber;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (id)typesForClippings;

@end
