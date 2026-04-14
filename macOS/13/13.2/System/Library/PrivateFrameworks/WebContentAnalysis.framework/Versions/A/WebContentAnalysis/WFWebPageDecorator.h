@class NSString, WFImgArrayCache, NSObject;
@protocol WFWebPageProtocol;

@interface WFWebPageDecorator : NSObject <WFWebPageProtocol> {
    NSObject<WFWebPageProtocol> *webPageStripper;
    WFImgArrayCache *pageImagesPropertyCache;
}

@property (retain) NSString *URLString;

+ (id)_plainTextWithSelector:(SEL)a0 object:(id)a1;
+ (id)plainTextWithWebPageData:(id)a0;
+ (id)plainTextWithWebPageString:(id)a0;
+ (id)webPageWithData:(id)a0;
+ (id)webPageWithData:(id)a0 URLString:(id)a1;
+ (id)webPageWithString:(id)a0;
+ (id)webPageWithString:(id)a0 URLString:(id)a1;

- (void)dealloc;
- (id)tags;
- (long long)wordCount;
- (id)links;
- (id)images;
- (long long)numberOfImages;
- (id)pageTitle;
- (id)plainText;
- (long long)numberOfUnknownSizedImages;
- (long long)numberOfKnownImagePixels;
- (id)metaTagDescription;
- (id)metaTagKeywords;
- (id)metaTagsLabeled;
- (id)metaTagsUnlabeled;
- (id)scriptBlocks;
- (id)pageContent;
- (BOOL)hasFrameset;
- (BOOL)hasShortRefresh;
- (id)initWithWebPageData:(id)a0;
- (id)initWithWebPageString:(id)a0;
- (id)imageAltsText;
- (id)initWithWebPageStripper:(id)a0;
- (void)_cacheImgProperties;
- (id)linkTitlesText;
- (id)plainTextAttributeWithSelector:(SEL)a0 title:(id)a1;
- (id)plainTextAttributeWithSelector:(SEL)a0 title:(id)a1 weight:(int)a2;
- (id)rawPlainText;

@end
