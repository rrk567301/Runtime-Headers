@class NSString, _TtC12SmartReplies28SRSmartRepliesActionMetadata;

@interface SmartReplies.SRSmartRepliesActionSuggestion : SmartReplies.SRSmartRepliesSuggestion {
    void /* function */ attribution;
}

@property (nonatomic, readonly) NSString *attribution;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) BOOL isRichSuggestion;
@property (nonatomic, readonly) _TtC12SmartReplies28SRSmartRepliesActionMetadata *metadata;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 isDynamicSuggestion:(BOOL)a1;
- (id)initWithType:(long long)a0 title:(id)a1 attribution:(id)a2 isRichSuggestion:(BOOL)a3 metadata:(id)a4;

@end
