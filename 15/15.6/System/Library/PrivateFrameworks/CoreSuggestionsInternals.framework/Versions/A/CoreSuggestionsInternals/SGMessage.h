@class NSString, NSArray, CSPerson, NSDate, SGHarvestQueueMetrics, _PASCachedResult;

@interface SGMessage : NSObject <NSSecureCoding, NSCopying, SGSpotlightIdentifiers> {
    _PASCachedResult *_isInhumanSenderCached;
    _PASCachedResult *_isInhumanContentCached;
    _PASCachedResult *_taggedCharacterRangesCached;
    _PASCachedResult *_messageSubjectDetectedDataCached;
    _PASCachedResult *_dataDetectorMatchesWithSignatureForContentCached;
    _PASCachedResult *_textContentLanguageIdentifierCached;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSString *textContent;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *mailConversationIdentifier;
@property (copy, nonatomic) NSString *domainIdentifier;
@property (copy, nonatomic) NSArray *accountHandles;
@property (nonatomic) char isSent;
@property (copy, nonatomic) NSString *accountType;
@property (nonatomic) char isStoredEncrypted;
@property (copy, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) CSPerson *author;
@property (readonly, nonatomic) NSString *textContentLanguageIdentifier;
@property (readonly, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) char isInhumanSender;
@property (readonly, nonatomic) char isInhumanContent;
@property (readonly, nonatomic) NSArray *messageSubjectDetectedData;
@property (readonly, nonatomic) NSArray *plainTextDetectedData;
@property (readonly, nonatomic) NSArray *taggedCharacterRanges;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } detectedDataSignatureRange;
@property (retain, nonatomic) SGHarvestQueueMetrics *harvestMetrics;
@property (readonly, nonatomic) long long contentLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)preferredLanguages;
+ (id)fromDictionary:(id)a0;
+ (id)messageWithSearchableItem:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setAttachments:(id)a0;
- (id)spotlightDomainIdentifier;
- (id)initWithSearchableItem:(id)a0;
- (char)isEqualToMessage:(id)a0;
- (id)initWithMessageDictionary:(id)a0;
- (id)asDictionary;
- (id)initForBuilding;
- (id)dataDetectorMatchesWithSignature;
- (id)initWithMailContentEvent:(id)a0 contentProtection:(id)a1;
- (id)initWithMessagesContentEvent:(id)a0 contentProtection:(id)a1;
- (char)isInhumanContentNoncached;
- (id)spotlightBundleIdentifier;
- (id)spotlightReference;
- (id)spotlightUniqueIdentifier;

@end
