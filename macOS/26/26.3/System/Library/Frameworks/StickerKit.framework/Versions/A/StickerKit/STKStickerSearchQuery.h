@class NSString, NSArray;

@interface STKStickerSearchQuery : NSObject {
    void /* function */ exactQuery;
    void /* function */ autocorrectedQuery;
    void /* function */ locale;
    void /* function */ multilingualSearchLocales;
}

@property (nonatomic, copy) NSString *exactQuery;
@property (nonatomic, copy) NSString *autocorrectedQuery;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic, copy) NSArray *multilingualSearchLocales;
@property (nonatomic) BOOL supportsImages;
@property (nonatomic) BOOL supportsGenmoji;
@property (nonatomic) BOOL supportsEmoji;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)trimmedEmojiSearchQuery;

@end
