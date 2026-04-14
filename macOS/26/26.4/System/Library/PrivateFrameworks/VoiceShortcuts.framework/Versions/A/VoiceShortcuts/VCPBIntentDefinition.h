@class NSString, NSMutableArray;

@interface VCPBIntentDefinition : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *associatedBundleID;
@property (retain, nonatomic) NSMutableArray *files;

+ (Class)filesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)filesCount;
- (void)addFiles:(id)a0;
- (void)clearFiles;
- (id)filesAtIndex:(unsigned long long)a0;

@end
