@class NSString, NSMutableArray;

@interface VCPBIntentDefinition : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *associatedBundleID;
@property (retain, nonatomic) NSMutableArray *files;

+ (Class)filesType;

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
- (unsigned long long)filesCount;
- (void)addFiles:(id)a0;
- (void)clearFiles;
- (id)filesAtIndex:(unsigned long long)a0;

@end
