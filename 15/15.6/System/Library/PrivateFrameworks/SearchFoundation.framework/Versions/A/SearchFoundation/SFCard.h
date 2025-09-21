@class NSData, NSString, NSArray, NSURL, SFImage, SFColor, NSDictionary, SFDrillDownMetadata;

@interface SFCard : NSObject <SFCard, NSSecureCoding, NSCopying> {
    struct { unsigned char flexibleSectionOrder : 1; unsigned char queryId : 1; unsigned char source : 1; unsigned char type : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic, getter=_originalCardData, setter=_setOriginalCardData:) NSData *originalCardData;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) int type;
@property (copy) NSArray *cardSections;
@property (copy, nonatomic) NSData *intentMessageData;
@property (copy, nonatomic) NSString *intentMessageName;
@property (copy, nonatomic) NSData *intentResponseMessageData;
@property (copy, nonatomic) NSString *intentResponseMessageName;
@property (copy, nonatomic) NSArray *dismissalCommands;
@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSString *contextReferenceIdentifier;
@property (copy, nonatomic) NSURL *urlValue;
@property (nonatomic) int source;
@property (copy, nonatomic) NSData *entityIdentifier;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (nonatomic) unsigned long long queryId;
@property (copy, nonatomic) NSString *fbr;
@property (nonatomic) char flexibleSectionOrder;
@property (copy, nonatomic) NSArray *entityProtobufMessages;
@property (retain, nonatomic) SFImage *titleImage;
@property (retain, nonatomic) SFColor *backgroundColor;
@property (retain, nonatomic) SFDrillDownMetadata *metadata;
@property (retain, nonatomic) SFDrillDownMetadata *drilldownMetadata;
@property (retain, nonatomic) SFImage *backgroundImage;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)hasType;
- (void)loadCardSectionsWithCompletionHandler:(id /* block */)a0;
- (char)hasSource;
- (id)initWithProtobuf:(id)a0;
- (char)hasFlexibleSectionOrder;
- (char)hasQueryId;
- (void)loadCardSectionsWithCompletionAndErrorHandler:(id /* block */)a0;

@end
