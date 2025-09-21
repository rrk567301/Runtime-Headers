@class NSURL, NSString, NSDate;

@interface BMWalletPaymentsCommerceOrderEmailEmailMetadata : BMEventBase <BMStoreData> {
    BOOL _hasRaw_dateSent;
    double _raw_dateSent;
    NSString *_raw_deeplinkURL;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSURL *deeplinkURL;
@property (readonly, nonatomic) NSString *messageID;
@property (readonly, nonatomic) NSDate *dateSent;
@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) NSString *senderDomain;
@property (readonly, nonatomic) NSString *fromEmailAddress;
@property (readonly, nonatomic) NSString *fromDisplayName;
@property (readonly, nonatomic) NSString *toEmailAddress;
@property (readonly, nonatomic) NSString *toDisplayName;
@property (readonly, nonatomic) NSString *replyToEmailAddress;
@property (readonly, nonatomic) NSString *replyToDisplayName;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)validKeyPaths;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessageID:(id)a0 dateSent:(id)a1 subject:(id)a2 senderDomain:(id)a3 deeplinkURL:(id)a4 fromEmailAddress:(id)a5 fromDisplayName:(id)a6 toEmailAddress:(id)a7 toDisplayName:(id)a8 replyToEmailAddress:(id)a9 replyToDisplayName:(id)a10;
- (id)initWithMessageID:(id)a0 dateSent:(id)a1 subject:(id)a2 senderDomain:(id)a3 fromEmailAddress:(id)a4 fromDisplayName:(id)a5 toEmailAddress:(id)a6 toDisplayName:(id)a7 replyToEmailAddress:(id)a8 replyToDisplayName:(id)a9;

@end
