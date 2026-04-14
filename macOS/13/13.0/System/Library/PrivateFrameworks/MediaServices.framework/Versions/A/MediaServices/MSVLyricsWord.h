@class MSVLyricsLine;

@interface MSVLyricsWord : MSVLyricsTextElement

@property (weak, nonatomic) MSVLyricsLine *parentLine;
@property (retain, nonatomic) MSVLyricsWord *nextWord;

- (id)init;
- (void).cxx_destruct;

@end
