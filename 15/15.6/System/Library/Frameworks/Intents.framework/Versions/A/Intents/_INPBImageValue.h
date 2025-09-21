@class NSData, NSString, _INPBValueMetadata;

@interface _INPBImageValue : PBCodable <_INPBImageValue, NSSecureCoding, NSCopying> {
    struct { unsigned char height : 1; unsigned char renderingMode : 1; unsigned char type : 1; unsigned char width : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSData *data;
@property (readonly, nonatomic) char hasData;
@property (nonatomic) double height;
@property (nonatomic) char hasHeight;
@property (copy, nonatomic) NSString *proxyServiceIdentifier;
@property (readonly, nonatomic) char hasProxyServiceIdentifier;
@property (nonatomic) int renderingMode;
@property (nonatomic) char hasRenderingMode;
@property (nonatomic) int type;
@property (nonatomic) char hasType;
@property (copy, nonatomic) NSString *uri;
@property (readonly, nonatomic) char hasUri;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (readonly, nonatomic) char hasValueMetadata;
@property (nonatomic) double width;
@property (nonatomic) char hasWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (int)StringAsRenderingMode:(id)a0;
- (id)renderingModeAsString:(int)a0;

@end
