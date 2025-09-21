@class NSString, NSArray;

@interface BMPhotosKnowledgeGraphEnrichmentEvent : NSObject <BMPersonaAwareIdentifiableContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) NSString *personaId;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) NSArray *topics;
@property (readonly, nonatomic) NSArray *entities;
@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) NSString *domainId;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)encodeAsProto;
- (BOOL)isCompleteWithContext:(id)a0 error:(id *)a1;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)json;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)jsonDict;
- (id)serialize;
- (BOOL)isValidWithContext:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUniqueId:(id)a0 absoluteTimestamp:(double)a1 topics:(id)a2 entities:(id)a3 locations:(id)a4;
- (id)initWithUniqueId:(id)a0 absoluteTimestamp:(double)a1 topics:(id)a2 entities:(id)a3 locations:(id)a4 contentProtection:(id)a5;
- (id)initWithUniqueId:(id)a0 personaId:(id)a1 absoluteTimestamp:(double)a2 topics:(id)a3 entities:(id)a4 locations:(id)a5 contentProtection:(id)a6;

@end
