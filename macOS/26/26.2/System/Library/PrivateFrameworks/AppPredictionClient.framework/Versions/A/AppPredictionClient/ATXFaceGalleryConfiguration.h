@class NSArray, NSDictionary, NSString, NSLocale;

@interface ATXFaceGalleryConfiguration : NSObject <BMStoreData, ATXProtoBufWrapper, NSSecureCoding, NSCopying>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *jsonDictionary;
@property (readonly, nonatomic, getter=isDayZero) BOOL dayZero;
@property (copy, nonatomic) NSArray *sections;
@property (nonatomic) long long source;
@property (retain, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationFromJSONDictionary:(id)a0;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithCoder:(id)a0;
- (id)initWithSections:(id)a0 source:(long long)a1 locale:(id)a2;
- (id)serialize;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)configurationByApplyingConfiguration:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)proto;
- (void).cxx_destruct;
- (id)initWithProto:(id)a0;
- (BOOL)isEqualToATXFaceGalleryConfiguration:(id)a0;
- (id)initWithSections:(id)a0;
- (id)encodeAsProto;
- (id)initWithSections:(id)a0 source:(long long)a1 locale:(id)a2 dayZero:(BOOL)a3;
- (id)dictionaryRepresentation;
- (id)json;

@end
