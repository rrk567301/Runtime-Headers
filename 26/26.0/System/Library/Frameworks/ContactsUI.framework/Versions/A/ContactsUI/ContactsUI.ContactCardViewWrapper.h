@class CNContact, NSViewController;

@interface ContactsUI.ContactCardViewWrapper : NSObject {
    void /* unknown type, empty encoding */ config;
}

@property (nonatomic, retain) NSViewController *hostingController;
@property (nonatomic, readonly) CNContact *workingContact;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContact:(id)a0 actionsProvider:(id)a1 isMe:(BOOL)a2;

@end
