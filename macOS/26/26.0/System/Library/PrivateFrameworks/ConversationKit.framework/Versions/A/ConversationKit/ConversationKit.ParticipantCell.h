@class NSString, _TtC15ConversationKit15ParticipantView;

@interface ConversationKit.ParticipantCell : NSCollectionViewItem {
    void /* unknown type, empty encoding */ participantIdentifier;
    void /* function */ accessibilityDisplayName;
}

@property (nonatomic, readonly) _TtC15ConversationKit15ParticipantView *participantView;
@property (nonatomic, copy) NSString *accessibilityDisplayName;

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
