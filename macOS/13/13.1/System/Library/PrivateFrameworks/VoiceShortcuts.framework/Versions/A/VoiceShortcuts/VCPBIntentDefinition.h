@class NSString, NSMutableArray;

@interface VCPBIntentDefinition : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *associatedBundleID;
@property (retain, nonatomic) NSMutableArray *files;

+ (Class)filesType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)addFiles:(id)a0;
- (void)clearFiles;
- (unsigned long long)filesCount;
- (id)filesAtIndex:(unsigned long long)a0;

@end
