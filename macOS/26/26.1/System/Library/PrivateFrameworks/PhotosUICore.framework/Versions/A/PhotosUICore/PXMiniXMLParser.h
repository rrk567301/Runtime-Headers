@class NSCharacterSet, NSScanner;

@interface PXMiniXMLParser : NSObject

@property (readonly, nonatomic) NSScanner *_scanner;
@property (readonly, nonatomic) NSCharacterSet *_syntaxMarkerCharactersSet;
@property (copy, nonatomic) id /* block */ parsedCharactersBlock;
@property (copy, nonatomic) id /* block */ parsedTagBlock;
@property (copy, nonatomic) id /* block */ parsedEntityBlock;
@property (copy, nonatomic) id /* block */ parsedErrorBlock;

- (id)initWithString:(id)a0;
- (void)parse;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_isAtEnd;
- (BOOL)_parseCharacters;
- (BOOL)_parseEntity;
- (BOOL)_parseTag;
- (BOOL)_tryScanningUsingBlock:(id /* block */)a0;

@end
