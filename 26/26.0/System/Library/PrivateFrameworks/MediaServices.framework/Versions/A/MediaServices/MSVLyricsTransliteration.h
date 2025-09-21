@class NSString, NSMutableDictionary;

@interface MSVLyricsTransliteration : MSVLyricsXMLElement

@property (copy, nonatomic) NSString *language;
@property (retain, nonatomic) NSMutableDictionary *linesMap;
@property (nonatomic, getter=isAutomaticallyCreated) BOOL automaticallyCreated;

- (id)description;
- (void).cxx_destruct;
- (id)transliterationForLine:(id)a0;

@end
