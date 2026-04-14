@class NSString, NSMutableArray;

@interface VCPBIntentDefinition : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *associatedBundleID;
@property (retain, nonatomic) NSMutableArray *files;

+ (Class)filesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addFiles:(id)a0;
- (unsigned long long)filesCount;
- (void)clearFiles;
- (id)filesAtIndex:(unsigned long long)a0;

@end
