@class NSString, NSArray;

@interface VideosUI.LibrarySidebarMockItem : NSObject <VUILibrarySidebarItem> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ symbolName;
    void /* unknown type, empty encoding */ badgeCount;
    void /* unknown type, empty encoding */ isEditable;
    void /* unknown type, empty encoding */ isChecked;
    void /* unknown type, empty encoding */ children;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *symbolName;
@property (nonatomic) void /* unknown type, empty encoding */ isGroup;
@property (nonatomic, copy) NSArray *children;

- (id)init;
- (void).cxx_destruct;
- (BOOL)validateDrag:(id)a0;
- (void)acceptDrop:(id)a0;
- (void)didSelectContextMenuItem:(id)a0;
- (id)getContextMenuItems;

@end
