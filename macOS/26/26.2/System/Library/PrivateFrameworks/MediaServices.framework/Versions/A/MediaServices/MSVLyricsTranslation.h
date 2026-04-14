@class NSString, NSMutableDictionary;

@interface MSVLyricsTranslation : MSVLyricsXMLElement

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *typeText;
@property (copy, nonatomic) NSString *language;
@property (retain, nonatomic) NSMutableDictionary *linesMap;
@property (nonatomic, getter=isAutomaticallyCreated) BOOL automaticallyCreated;

+ (long long)_translationTypeForText:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)translationForLine:(id)a0;

@end
