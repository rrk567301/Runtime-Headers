@interface SiriSharedUIAssistantSuggestionView : NSView {
    void /* unknown type, empty encoding */ suggestion;
    void /* unknown type, empty encoding */ suggestionsModel;
    void /* unknown type, empty encoding */ hostingView;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ isEnabled;
    void /* unknown type, empty encoding */ suggestionsMaxWidth;
    void /* unknown type, empty encoding */ index;
    void /* unknown type, empty encoding */ isDismissed;
    void /* function */ pressDownHandler;
    void /* function */ pressUpHandler;
    void /* function */ pressDownHandlerWithData;
    void /* function */ pressUpHandlerWithData;
}

@property (nonatomic, copy) id /* block */ pressDownHandler;
@property (nonatomic, copy) id /* block */ pressUpHandler;
@property (nonatomic, copy) id /* block */ pressDownHandlerWithData;
@property (nonatomic, copy) id /* block */ pressUpHandlerWithData;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isPresented;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)performSuggestionInPlaceAnimationDismissing;
- (void)performSuggestionInPlaceAnimationPresenting;
- (void)setSuggestionFocused:(BOOL)a0;
- (void)suggestionExposedToUser;
- (void)suggestionRenderedForContainer;

@end
