@class NSString, BCSCallerIdMessage;

@interface BCSCallerIdWrapper : PBCodable <NSCopying> {
    struct { unsigned char modTime : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPhone;
@property (retain, nonatomic) NSString *phone;
@property (readonly, nonatomic) BOOL hasMessage;
@property (retain, nonatomic) BCSCallerIdMessage *message;
@property (nonatomic) BOOL hasModTime;
@property (nonatomic) long long modTime;

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

@end
