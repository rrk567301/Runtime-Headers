@class NSDateFormatter, NSMutableString, IMPodcastFeed, NSString, NSError;

@interface IMPodcastParser : NSObject <NSXMLParserDelegate>

@property (retain, nonatomic) IMPodcastFeed *parsedFeed;
@property (retain, nonatomic) NSDateFormatter *rssDateFormatter;
@property (nonatomic) char shouldBufferElementChars;
@property (retain, nonatomic) NSMutableString *elementCharBuffer;
@property (nonatomic) unsigned long long itemElementNestCount;
@property (nonatomic) char inAuthorElement;
@property (nonatomic) char inGlobalImageElement;
@property (retain, nonatomic) NSString *feedDescriptionSourceElement;
@property (nonatomic) char preferredFeedCategoryFound;
@property (nonatomic) char preferredItemCategoryFound;
@property (nonatomic) long long feedType;
@property (retain, nonatomic) NSError *parseError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isContentNamespace:(id)a0;
+ (char)isITunesNamespace:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)_parseEnclosureElement:(id)a0 forFeedItem:(id)a1;
- (void)atomParser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)atomParser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (id)dateFromAtomDateString:(id)a0;
- (id)dateFromRSSDateString:(id)a0;
- (id)elementCharBufferTrimmed;
- (void)endBufferingElementChars;
- (void)parseStreamFromURL:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)parseWithData:(id)a0;
- (void)postProcessItemElement:(id)a0;
- (id)removeLastColonOfString:(id)a0;
- (void)rssParser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)rssParser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)startBufferingElementChars;

@end
