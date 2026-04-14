@class NSString, NSArray, NSLocale;

@interface SKDKeyphraserInput : SKDModelInput {
    NSString *_text;
    NSLocale *_locale;
    NSArray *_entityRanges;
}

- (void).cxx_destruct;
- (id)initWithInputID:(int)a0 text:(id)a1 locale:(id)a2 entityRanges:(id)a3;

@end
