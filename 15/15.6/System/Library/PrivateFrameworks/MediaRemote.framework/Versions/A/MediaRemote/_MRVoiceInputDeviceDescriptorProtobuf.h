@class NSMutableArray, _MRAudioFormatSettingsProtobuf;

@interface _MRVoiceInputDeviceDescriptorProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *supportedFormats;
@property (readonly, nonatomic) char hasDefaultFormat;
@property (retain, nonatomic) _MRAudioFormatSettingsProtobuf *defaultFormat;

+ (Class)supportedFormatsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addSupportedFormats:(id)a0;
- (void)clearSupportedFormats;
- (id)supportedFormatsAtIndex:(unsigned long long)a0;
- (unsigned long long)supportedFormatsCount;

@end
