@class GTTransport_replayer, NSData, NSDictionary;

@interface GTTransportMessage_replayer : NSObject <NSCopying> {
    id _decodedPayload;
    unsigned int _decodedPayloadType;
}

@property (readonly, retain, nonatomic) GTTransport_replayer *transport;
@property (readonly, nonatomic) unsigned int transportSize;
@property (retain, nonatomic) NSData *encodedAttributes;
@property (readonly, nonatomic) int kind;
@property (readonly, nonatomic) unsigned int serial;
@property (readonly, nonatomic) unsigned int replySerial;
@property (readonly, retain, nonatomic) NSDictionary *attributes;
@property (readonly, retain, nonatomic) NSData *payload;

+ (id)messageWithKind:(int)a0;
+ (id)messageWithKind:(int)a0 attributes:(id)a1;
+ (id)messageWithKind:(int)a0 attributes:(id)a1 boolPayload:(BOOL)a2;
+ (id)messageWithKind:(int)a0 attributes:(id)a1 objectPayload:(id)a2;
+ (id)messageWithKind:(int)a0 attributes:(id)a1 payload:(id)a2;
+ (id)messageWithKind:(int)a0 attributes:(id)a1 plistPayload:(id)a2;
+ (id)messageWithKind:(int)a0 attributes:(id)a1 stringPayload:(id)a2;
+ (id)messageWithKind:(int)a0 boolPayload:(BOOL)a1;
+ (id)messageWithKind:(int)a0 objectPayload:(id)a1;
+ (id)messageWithKind:(int)a0 payload:(id)a1;
+ (id)messageWithKind:(int)a0 plistPayload:(id)a1;
+ (id)messageWithKind:(int)a0 stringPayload:(id)a1;

- (double)doubleForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (id)attributeForKey:(id)a0;
- (unsigned long long)uint64ForKey:(id)a0;
- (id)stringPayload;
- (void)_setSerial:(unsigned int)a0 replySerial:(unsigned int)a1 transport:(id)a2;
- (void)_setTransportSize:(unsigned int)a0;
- (BOOL)boolPayload;
- (BOOL)hasBeenSent;
- (id)initWithKind:(int)a0 attributes:(id)a1 boolPayload:(BOOL)a2;
- (id)initWithKind:(int)a0 attributes:(id)a1 objectPayload:(id)a2;
- (id)initWithKind:(int)a0 attributes:(id)a1 payload:(id)a2;
- (id)initWithKind:(int)a0 attributes:(id)a1 plistPayload:(id)a2;
- (id)initWithKind:(int)a0 attributes:(id)a1 stringPayload:(id)a2;
- (id)objectPayload;
- (id)plistPayload;
- (unsigned int)uint32ForKey:(id)a0;

@end
