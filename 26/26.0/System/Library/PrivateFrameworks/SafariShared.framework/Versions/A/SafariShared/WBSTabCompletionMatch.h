@class NSURL, NSString;

@interface WBSTabCompletionMatch : WBSURLCompletionMatch {
    NSString *_title;
}

@property (readonly, nonatomic) NSURL *url;

+ (long long)_matchLocationForString:(id)a0 url:(id)a1 title:(id)a2;

- (id)title;
- (void).cxx_destruct;
- (id)originalURLString;
- (id)initWithUserTypedString:(id)a0 url:(id)a1 title:(id)a2 forQueryID:(long long)a3;
- (id)userVisibleURLString;

@end
