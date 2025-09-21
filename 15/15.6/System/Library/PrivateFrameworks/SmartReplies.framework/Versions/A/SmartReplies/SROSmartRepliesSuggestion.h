@class NSString, _TtC12SmartReplies24SRSmartRepliesSuggestion;

@interface SROSmartRepliesSuggestion : NSObject {
    _TtC12SmartReplies24SRSmartRepliesSuggestion *_underlyingSuggestion;
}

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) char isDynamicSuggestion;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 isDynamicSuggestion:(char)a1;

@end
