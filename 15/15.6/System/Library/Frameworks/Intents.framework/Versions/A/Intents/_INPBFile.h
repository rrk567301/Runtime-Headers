@class NSData, _INPBURLValue, NSString;

@interface _INPBFile : PBCodable <_INPBFile, NSSecureCoding, NSCopying> {
    struct { unsigned char removedOnCompletion : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSData *bookmarkData;
@property (readonly, nonatomic) char hasBookmarkData;
@property (copy, nonatomic) NSData *data;
@property (readonly, nonatomic) char hasData;
@property (retain, nonatomic) _INPBURLValue *fileURL;
@property (readonly, nonatomic) char hasFileURL;
@property (copy, nonatomic) NSString *filename;
@property (readonly, nonatomic) char hasFilename;
@property (nonatomic) char removedOnCompletion;
@property (nonatomic) char hasRemovedOnCompletion;
@property (copy, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) char hasTypeIdentifier;
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
