@class _DKEvent, NSString;

@interface BMDKEvent : NSObject <BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) _DKEvent *dkEvent;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithDKEvent:(id)a0;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDKEvent:(id)a0;
- (id)initWithData:(id)a0 dataVersion:(unsigned int)a1 decodeMetadata:(char)a2;
- (id)json;
- (id)jsonDict;
- (id)serialize;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (char)isCompleteWithContext:(id)a0 error:(id *)a1;
- (char)isValidWithContext:(id)a0 error:(id *)a1;

@end
