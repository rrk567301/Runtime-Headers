@class NSString;

@interface _INPBFocusStatus : PBCodable <_INPBFocusStatus, NSSecureCoding, NSCopying> {
    struct { unsigned char isFocused : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char isFocused;
@property (nonatomic) char hasIsFocused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
