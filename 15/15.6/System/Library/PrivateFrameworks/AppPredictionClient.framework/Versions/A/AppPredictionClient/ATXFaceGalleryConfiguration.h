@class NSArray, NSDictionary, NSString, NSLocale;

@interface ATXFaceGalleryConfiguration : NSObject <BMStoreData, ATXProtoBufWrapper, NSSecureCoding, NSCopying>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *jsonDictionary;
@property (readonly, nonatomic, getter=isDayZero) char dayZero;
@property (copy, nonatomic) NSArray *sections;
@property (nonatomic) long long source;
@property (retain, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)configurationFromJSONDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)configurationByApplyingConfiguration:(id)a0;
- (id)json;
- (id)serialize;
- (id)initWithSections:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)initWithSections:(id)a0 source:(long long)a1 locale:(id)a2;
- (id)initWithSections:(id)a0 source:(long long)a1 locale:(id)a2 dayZero:(char)a3;
- (char)isEqualToATXFaceGalleryConfiguration:(id)a0;

@end
