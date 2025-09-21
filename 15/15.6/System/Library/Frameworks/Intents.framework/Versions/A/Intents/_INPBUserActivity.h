@class NSData, NSString;

@interface _INPBUserActivity : PBCodable <_INPBUserActivity, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSData *data;
@property (readonly, nonatomic) char hasData;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasTitle;
@property (copy, nonatomic) NSString *uri;
@property (readonly, nonatomic) char hasUri;
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
