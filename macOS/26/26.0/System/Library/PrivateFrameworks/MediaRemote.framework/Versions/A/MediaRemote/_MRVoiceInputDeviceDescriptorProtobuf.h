@class NSMutableArray, _MRAudioFormatSettingsProtobuf;

@interface _MRVoiceInputDeviceDescriptorProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *supportedFormats;
@property (readonly, nonatomic) BOOL hasDefaultFormat;
@property (retain, nonatomic) _MRAudioFormatSettingsProtobuf *defaultFormat;

+ (Class)supportedFormatsType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addSupportedFormats:(id)a0;
- (void)clearSupportedFormats;
- (id)supportedFormatsAtIndex:(unsigned long long)a0;
- (unsigned long long)supportedFormatsCount;

@end
