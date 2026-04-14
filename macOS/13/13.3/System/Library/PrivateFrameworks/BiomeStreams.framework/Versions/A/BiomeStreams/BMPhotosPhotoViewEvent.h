@class NSString, NSArray;

@interface BMPhotosPhotoViewEvent : NSObject <BMIdentifiableContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) double absoluteTimestamp;
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
- (id)initWithUniqueId:(id)a0 locations:(id)a1 absoluteTimestamp:(double)a2 contentProtection:(id)a3;
- (id)encodeAsProto;
- (id)initWithProto:(id)a0;
- (id)initWithUniqueId:(id)a0 locations:(id)a1 absoluteTimestamp:(double)a2;
- (BOOL)isCompleteWithContext:(id)a0 error:(id *)a1;
- (BOOL)isValidWithContext:(id)a0 error:(id *)a1;
- (id)proto;

@end
