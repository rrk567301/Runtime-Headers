@class NSViewController;

@interface NotesEditor.ICMSystemPaperLinkHelper : NSObject {
    void /* unknown type, empty encoding */ paperLinksViewController;
    void /* unknown type, empty encoding */ linkHelperDelegate;
}

@property (nonatomic, readonly) NSViewController *linkPopover;

- (id)initWithDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)fetchLinkableItems;

@end
