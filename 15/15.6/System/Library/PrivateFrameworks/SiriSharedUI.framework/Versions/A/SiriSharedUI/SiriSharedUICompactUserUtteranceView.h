@class SUICStreamingTextView, NSString, NSView, SiriSharedUIAlternateUserUtteranceView, SRUIFSpeechRecognitionHypothesis;
@protocol SiriSharedUIUserUtteranceEditingDataManaging, SiriSharedUICompactUserUtteranceViewDelegate;

@interface SiriSharedUICompactUserUtteranceView : SiriSharedUIStandardView <SUICStreamingTextViewDelegate, NSTextViewDelegate, SiriSharedUIAlternateUserUtteranceViewDataSource, SiriSharedUIAlternateUserUtteranceViewDelegate> {
    SRUIFSpeechRecognitionHypothesis *_speechRecognitionHypothesis;
    id<SiriSharedUIUserUtteranceEditingDataManaging> _userUtteranceEditingDataManager;
}

@property (retain, nonatomic, getter=_streamingTextView, setter=_setStreamingTextView:) SUICStreamingTextView *streamingTextView;
@property (retain, nonatomic, getter=_emojiMaskStreamingTextView, setter=_setEmojiMaskStreamingTextView:) SUICStreamingTextView *emojiMaskStreamingTextView;
@property (retain, nonatomic, getter=_editableStreamingTextView, setter=_setEditableStreamingTextView:) SUICStreamingTextView *editableStreamingTextView;
@property (nonatomic) char isEditing;
@property (retain, nonatomic, getter=_backgroundView, setter=_setBackgroundView:) NSView *backgroundView;
@property (retain, nonatomic) SiriSharedUIAlternateUserUtteranceView *alternateUserUtteranceView;
@property (weak, nonatomic) id<SiriSharedUICompactUserUtteranceViewDelegate> delegate;
@property (readonly, nonatomic) long long currentDisplayType;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) char isInAmbient;
@property (nonatomic) char isInAmbientInteractivity;
@property (nonatomic) double maxWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)textDidEndEditing:(id)a0;
- (long long)numberOfAlternativeUtterances;
- (id)attributedStringAtIndex:(long long)a0;
- (void)setSpeechRecognitionHypothesis:(id)a0;
- (void)streamingTextViewDidBecomeFirstResponder:(id)a0;
- (void)streamingTextViewDidResignFirstResponder:(id)a0;
- (id)_createStreamingTextViewForEmojisOnly:(char)a0;
- (void)_endEditingIfNecessary;
- (id)_fontForStreamingTextView;
- (void)_setStreamingText:(id)a0 carousel:(char)a1 showEditImage:(char)a2;
- (void)_setupEditingStreamingTextView;
- (char)_shouldPresentAlternativeUtterances;
- (void)_startEditing;
- (void)_updateAmbientAppearance;
- (void)_updateStreamingTextView:(id)a0 textColor:(id)a1;
- (char)allowsAccessiblityEditingUtteranceActionForStreamingTextView:(id)a0;
- (void)editableUtteranceView:(id)a0 alternativeSelectedAtIndex:(long long)a1;
- (id)initWithContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0 cornerRadius:(double)a1;
- (void)performAccessibilityEditUtteranceActionForStreamingTextView:(id)a0;
- (void)setLatencySummary:(id)a0;

@end
