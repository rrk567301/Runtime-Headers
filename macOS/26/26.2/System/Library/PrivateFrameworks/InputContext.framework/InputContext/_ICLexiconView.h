@class NSString;

@interface _ICLexiconView : NSObject {
    struct _LXLexicon { } *_lexicon;
}

@property (readonly, nonatomic) unsigned char typeFlags;
@property (readonly, nonatomic) NSString *name;

- (struct _LXLexicon { } *)getLexiconImplementation;
- (id)initWithName:(id)a0 typeFlags:(unsigned char)a1;
- (void).cxx_destruct;
- (BOOL)contains:(id)a0;
- (void)dealloc;
- (struct _LXEntry { } *)copyEntryForString:(id)a0;
- (id)getSortKeyEquivalents:(id)a0;

@end
