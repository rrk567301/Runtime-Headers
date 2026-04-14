@class CNContact, NSViewController;

@interface ContactsUI.ContactHeaderViewWrapper : NSObject {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ statusBadgeModel;
}

@property (nonatomic, retain) NSViewController *hostingController;
@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic) BOOL enableStatusBadges;
@property (nonatomic, readonly) double desiredHeight;
@property (nonatomic) long long quickActionViewStyle;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContact:(id)a0 quickActionViewStyle:(long long)a1 delegate:(id)a2;

@end
