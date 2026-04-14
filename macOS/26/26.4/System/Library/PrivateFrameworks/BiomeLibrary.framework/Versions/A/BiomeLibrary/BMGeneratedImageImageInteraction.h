@class NSUUID, NSString, NSData;

@interface BMGeneratedImageImageInteraction : BMEventBase <BMStoreData> {
    NSData *_raw_promptIdentifer;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int imageIdentifier;
@property (nonatomic) BOOL hasImageIdentifier;
@property (readonly, nonatomic) NSUUID *promptIdentifer;
@property (readonly, nonatomic) BOOL engaged;
@property (nonatomic) BOOL hasEngaged;
@property (readonly, nonatomic) int numViews;
@property (nonatomic) BOOL hasNumViews;
@property (readonly, nonatomic) int timeViewed;
@property (nonatomic) BOOL hasTimeViewed;
@property (readonly, nonatomic) BOOL saved;
@property (nonatomic) BOOL hasSaved;
@property (readonly, nonatomic) BOOL shared;
@property (nonatomic) BOOL hasShared;
@property (readonly, nonatomic) BOOL copied;
@property (nonatomic) BOOL hasCopied;
@property (readonly, nonatomic) BOOL inserted;
@property (nonatomic) BOOL hasInserted;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;
+ (id)validKeyPaths;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)serialize;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)writeTo:(id)a0;
- (id)initWithImageIdentifier:(id)a0 promptIdentifer:(id)a1 engaged:(id)a2 numViews:(id)a3 timeViewed:(id)a4 saved:(id)a5 shared:(id)a6 copied:(id)a7 inserted:(id)a8;

@end
