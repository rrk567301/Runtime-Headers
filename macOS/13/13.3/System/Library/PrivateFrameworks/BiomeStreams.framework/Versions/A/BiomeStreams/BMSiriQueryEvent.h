@class NSString, NSArray;

@interface BMSiriQueryEvent : NSObject <BMIdentifiableContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) NSString *query;
@property (readonly, nonatomic) NSArray *results;
@property (readonly, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) NSString *domainId;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)serialize;
- (id)jsonDict;
- (id)json;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (id)initWithProto:(id)a0;
- (id)initWithUniqueId:(id)a0 absoluteTimestamp:(double)a1 query:(id)a2 results:(id)a3;
- (id)initWithUniqueId:(id)a0 absoluteTimestamp:(double)a1 query:(id)a2 results:(id)a3 contentProtection:(id)a4;
- (BOOL)isCompleteWithContext:(id)a0 error:(id *)a1;
- (BOOL)isValidWithContext:(id)a0 error:(id *)a1;
- (id)proto;

@end
