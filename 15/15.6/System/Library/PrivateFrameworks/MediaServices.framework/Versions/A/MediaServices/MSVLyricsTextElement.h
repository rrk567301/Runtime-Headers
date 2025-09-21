@class NSAttributedString;

@interface MSVLyricsTextElement : MSVLyricsElement

@property (copy, nonatomic) NSAttributedString *lyricsText;
@property (nonatomic) char keepParentheses;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
