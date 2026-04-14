@class SGSimpleNamedEmailAddress, NSString, NSArray, NSData, HVHtmlParser, NSIndexSet, _PASCachedResult;

@interface SGSimpleMailMessage : SGMessage {
    NSString *_htmlBody;
    _PASCachedResult *_htmlBodyCached;
    NSData *_htmlContentData;
    _PASCachedResult *_htmlContentDataCached;
    _PASCachedResult *_quotedRegionsCached;
    _PASCachedResult *_hasHumanHeadersCached;
    _PASCachedResult *_authorCached;
}

@property (readonly, nonatomic) NSString *messageIdWithoutBrackets;
@property (copy, nonatomic) SGSimpleNamedEmailAddress *from;
@property (copy, nonatomic) SGSimpleNamedEmailAddress *replyTo;
@property (copy, nonatomic) NSArray *to;
@property (copy, nonatomic) NSArray *cc;
@property (copy, nonatomic) NSArray *bcc;
@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *htmlBody;
@property (copy, nonatomic) NSData *htmlContentData;
@property (nonatomic) BOOL hasInhumanHeaders;
@property (nonatomic) BOOL isPartiallyDownloaded;
@property (copy, nonatomic) SGSimpleNamedEmailAddress *mailingList;
@property (copy, nonatomic) NSArray *mailboxIdentifiers;
@property (copy, nonatomic) NSArray *headers;
@property (readonly, nonatomic) NSString *appleMailMessageId;
@property (readonly, nonatomic) NSString *inReplyTo;
@property (readonly, nonatomic) HVHtmlParser *htmlParser;
@property (readonly, nonatomic) NSIndexSet *quotedRegions;
@property (readonly, nonatomic) BOOL hasHumanHeaders;

+ (BOOL)supportsSecureCoding;
+ (id)simpleMailMessageFromHeaders:(id)a0;
+ (id)addressItemsFromEmailString:(id)a0;
+ (id)dateFromEmailString:(id)a0;
+ (id)decodeQuotedPrintable:(id)a0 charset:(unsigned long long)a1 rfc2047UnderscoreAsSpace:(BOOL)a2;
+ (id)decodeEncodedWordsIn:(id)a0;
+ (id)parseHeaders:(id)a0;
+ (id)parseRfc822Headers:(id)a0 htmlContent:(id)a1;
+ (id)parseRfc822Headers:(id)a0 htmlContent:(id)a1 source:(id)a2;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfBodyFromRfc822:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfHeadersFromRfc822:(id)a0;
+ (id)uudecode:(id)a0;
+ (id)stripTrailingASCIIHSpace:(id)a0;
+ (id)formatFlowed:(id)a0 delSp:(BOOL)a1;
+ (id)parseParameterizedHeaderValue:(id)a0;
+ (id)htmlFromPlainTextBody:(id)a0;
+ (id)htmlBodyFromRfc822:(id)a0 headers:(id)a1 attachmentCallback:(id /* block */)a2;
+ (id)parseRfc822:(id)a0;
+ (id)parseRfc822:(id)a0 attachmentCallback:(id /* block */)a1;
+ (BOOL)headerDictionaryContainsInhumanHeaders:(id)a0;
+ (BOOL)headersContainInhumanOnes:(id)a0 keys:(id)a1;
+ (id)subjectByCleaningPrefixesInSubject:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)author;
- (id)body;
- (id)textContent;
- (long long)contentLength;
- (id)initWithSearchableItem:(id)a0;
- (id)initWithMessageDictionary:(id)a0;
- (id)asDictionary;
- (id)spotlightBundleIdentifier;
- (id)initForBuilding;
- (id)spotlightUniqueIdentifier;
- (id)headersDictionary;
- (void)_clearExistingHtml;
- (BOOL)isInhumanContentNoncached;
- (id)dataDetectorMatchesWithSignature;
- (BOOL)isEqualToSimpleMailMessage:(id)a0;
- (id)initWithMailContentEvent:(id)a0 contentProtection:(id)a1 htmlParser:(id)a2;
- (id)allRecipients;
- (id)senderDomain;
- (BOOL)hasRecipientFromSameDomainAsSender;
- (id)createNewSearchableItemWithSource:(id)a0 uniqueIdentifier:(id)a1 domainIdentifier:(id)a2;
- (id)createNewSearchableItem;
- (id)removeBrackets:(id)a0;

@end
