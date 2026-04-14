@class NSAttributedString;

@interface MSVLyricsTextElement : MSVLyricsElement

@property (copy, nonatomic) NSAttributedString *lyricsText;
@property (nonatomic) BOOL keepParentheses;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
