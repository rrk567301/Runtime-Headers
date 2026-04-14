@class _DKEvent, NSString;

@interface BMDKEvent : NSObject <BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _DKEvent *dkEvent;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)eventWithDKEvent:(id)a0;

- (id)json;
- (id)initWithData:(id)a0 dataVersion:(unsigned int)a1 decodeMetadata:(BOOL)a2;
- (BOOL)isValidWithContext:(id)a0 error:(id *)a1;
- (BOOL)isCompleteWithContext:(id)a0 error:(id *)a1;
- (id)init;
- (id)proto;
- (id)serialize;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)jsonDict;
- (id)encodeAsProto;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDKEvent:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
