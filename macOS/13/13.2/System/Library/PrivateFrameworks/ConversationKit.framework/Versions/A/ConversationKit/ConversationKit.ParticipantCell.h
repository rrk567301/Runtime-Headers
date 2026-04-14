@class NSString;

@interface ConversationKit.ParticipantCell : NSCollectionViewItem {
    void /* unknown type, empty encoding */ participantIdentifier;
    void /* unknown type, empty encoding */ accessibilityDisplayName;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ participantView;
@property (nonatomic, copy) NSString *accessibilityDisplayName;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;

@end
