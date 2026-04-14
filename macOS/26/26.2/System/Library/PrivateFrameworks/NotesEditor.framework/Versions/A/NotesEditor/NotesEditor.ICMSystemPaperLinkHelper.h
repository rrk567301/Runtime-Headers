@class NSViewController;

@interface NotesEditor.ICMSystemPaperLinkHelper : NSObject {
    void /* unknown type, empty encoding */ paperLinksViewController;
    void /* unknown type, empty encoding */ linkHelperDelegate;
}

@property (nonatomic, readonly) NSViewController *linkPopover;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDelegate:(id)a0;
- (void)fetchLinkableItems;

@end
