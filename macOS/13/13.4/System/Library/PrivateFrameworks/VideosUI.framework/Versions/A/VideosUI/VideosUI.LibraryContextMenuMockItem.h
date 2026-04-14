@class NSString;

@interface VideosUI.LibraryContextMenuMockItem : NSObject <VUILibraryContextMenuItem> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ title;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) void /* unknown type, empty encoding */ isSeparator;
@property (nonatomic) void /* unknown type, empty encoding */ isChecked;

- (id)init;
- (void).cxx_destruct;

@end
