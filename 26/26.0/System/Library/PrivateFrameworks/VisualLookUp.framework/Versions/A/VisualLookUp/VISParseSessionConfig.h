@class NSData, NSString;

@interface VISParseSessionConfig : PBCodable <VISParseSessionConfig, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL enable_object_detection;
@property (nonatomic) BOOL enable_object_tracking;
@property (nonatomic) BOOL enable_text_detection;
@property (nonatomic) BOOL use_vi_detector;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
