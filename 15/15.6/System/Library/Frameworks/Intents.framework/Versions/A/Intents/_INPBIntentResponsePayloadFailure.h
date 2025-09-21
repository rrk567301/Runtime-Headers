@class NSString;

@interface _INPBIntentResponsePayloadFailure : PBCodable <_INPBIntentResponsePayloadFailure, NSSecureCoding, NSCopying> {
    struct { unsigned char appLaunchRequested : 1; unsigned char errorCode : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char appLaunchRequested;
@property (nonatomic) char hasAppLaunchRequested;
@property (copy, nonatomic) NSString *enumTypeName;
@property (readonly, nonatomic) char hasEnumTypeName;
@property (nonatomic) int errorCode;
@property (nonatomic) char hasErrorCode;
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

@end
