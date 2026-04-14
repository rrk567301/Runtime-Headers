@class NSAttributedString;

@interface MSVLyricsTextElement : MSVLyricsElement

@property (copy, nonatomic) NSAttributedString *lyricsText;
@property (nonatomic) BOOL keepParentheses;

- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
