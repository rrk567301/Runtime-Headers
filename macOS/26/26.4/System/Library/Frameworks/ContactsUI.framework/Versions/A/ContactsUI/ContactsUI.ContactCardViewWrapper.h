@class CNContact, NSViewController;

@interface ContactsUI.ContactCardViewWrapper : NSObject {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ cardActionViewModels;
    void /* unknown type, empty encoding */ customActionViewModels;
}

@property (nonatomic, retain) NSViewController *hostingController;
@property (nonatomic, readonly) CNContact *workingContact;

- (void).cxx_destruct;
- (id)init;
- (id)initWithContact:(id)a0 contactStore:(id)a1 actionsProvider:(id)a2 isMe:(BOOL)a3;

@end
