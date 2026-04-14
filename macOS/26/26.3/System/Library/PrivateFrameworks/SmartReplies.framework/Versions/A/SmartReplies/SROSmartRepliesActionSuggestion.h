@class NSString, SROSmartRepliesActionMetadata, _TtC12SmartReplies30SRSmartRepliesActionSuggestion;

@interface SROSmartRepliesActionSuggestion : SROSmartRepliesSuggestion {
    _TtC12SmartReplies30SRSmartRepliesActionSuggestion *_underlyingSuggestion;
}

@property (readonly) NSString *attribution;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL isRichSuggestion;
@property (readonly, nonatomic) SROSmartRepliesActionMetadata *metadata;

- (id)title;
- (void).cxx_destruct;
- (BOOL)isDynamicSuggestion;
- (id)initWithType:(unsigned long long)a0 title:(id)a1 attribution:(id)a2 isRichSuggestion:(BOOL)a3 metadata:(id)a4;

@end
