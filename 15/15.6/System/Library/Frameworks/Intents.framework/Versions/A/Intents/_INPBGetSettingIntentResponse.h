@class NSString, NSArray;

@interface _INPBGetSettingIntentResponse : PBCodable <_INPBGetSettingIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *errorDetail;
@property (readonly, nonatomic) char hasErrorDetail;
@property (copy, nonatomic) NSArray *settingResponseDatas;
@property (readonly, nonatomic) unsigned long long settingResponseDatasCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)settingResponseDataType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addSettingResponseData:(id)a0;
- (void)clearSettingResponseDatas;
- (id)settingResponseDataAtIndex:(unsigned long long)a0;

@end
