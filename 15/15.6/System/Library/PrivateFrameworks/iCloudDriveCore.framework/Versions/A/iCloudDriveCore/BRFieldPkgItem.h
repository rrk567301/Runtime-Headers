@class NSString, NSData;

@interface BRFieldPkgItem : PBCodable <NSCopying> {
    struct { unsigned char mtime : 1; unsigned char xattrIndex : 1; unsigned char isExecutable : 1; unsigned char isWritable : 1; } _has;
}

@property (nonatomic) int type;
@property (readonly, nonatomic) char hasPath;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) char hasMtime;
@property (nonatomic) long long mtime;
@property (nonatomic) char hasIsWritable;
@property (nonatomic) char isWritable;
@property (nonatomic) char hasIsExecutable;
@property (nonatomic) char isExecutable;
@property (readonly, nonatomic) char hasSymlinkContent;
@property (retain, nonatomic) NSString *symlinkContent;
@property (readonly, nonatomic) char hasQuarantineInfo;
@property (retain, nonatomic) NSData *quarantineInfo;
@property (readonly, nonatomic) char hasSignature;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic) char hasXattrIndex;
@property (nonatomic) long long xattrIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (id)initWithPkgItem:(id)a0;
- (void)updateWithPkgItem:(id)a0;

@end
