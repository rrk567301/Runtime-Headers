@class NSString, _MKUILabel;

@interface MKTransitMessageCell : MKCustomSeparatorCell <MKMultiLineLabelContainer> {
    _MKUILabel *_messageLabel;
}

@property (copy, nonatomic) NSString *messageText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (id)multilineTextFieldsWithinContainer;

@end
