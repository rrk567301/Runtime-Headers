@class NSData, NSString;

@interface VISParseSessionConfig : PBCodable <VISParseSessionConfig, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char enable_object_detection;
@property (nonatomic) char enable_object_tracking;
@property (nonatomic) char enable_text_detection;
@property (nonatomic) char use_vi_detector;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
