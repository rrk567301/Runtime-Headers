@class NSAttributedString;

@interface MSVLyricsTextElement : MSVLyricsElement

@property (copy, nonatomic) NSAttributedString *lyricsText;
@property (nonatomic) BOOL keepParentheses;

- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
