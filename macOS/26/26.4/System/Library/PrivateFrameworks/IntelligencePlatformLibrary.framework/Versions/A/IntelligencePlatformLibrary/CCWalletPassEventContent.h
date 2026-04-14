@class NSArray, NSString;

@interface CCWalletPassEventContent : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) NSArray *artistIDs;
@property (readonly, nonatomic) NSString *awayTeamAbbreviation;
@property (readonly, nonatomic) NSString *awayTeamName;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSString *eventType;
@property (readonly, nonatomic) NSString *genre;
@property (readonly, nonatomic) NSString *homeTeamAbbreviation;
@property (readonly, nonatomic) NSString *homeTeamName;
@property (readonly, nonatomic) NSArray *performerNames;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithArtistIDs:(id)a0 awayTeamAbbreviation:(id)a1 awayTeamName:(id)a2 eventName:(id)a3 eventType:(id)a4 genre:(id)a5 homeTeamAbbreviation:(id)a6 homeTeamName:(id)a7 performerNames:(id)a8 error:(id *)a9;

@end
