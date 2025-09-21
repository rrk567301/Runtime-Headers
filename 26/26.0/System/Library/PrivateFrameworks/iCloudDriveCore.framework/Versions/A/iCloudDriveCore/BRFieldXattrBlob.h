@class NSMutableArray;

@interface BRFieldXattrBlob : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *xattrs;

+ (id)loadXattrsFromFD:(int)a0 withMaximumSize:(unsigned long long)a1 error:(id *)a2;
+ (Class)xattrsType;
+ (BOOL)loadXattrsFromFD:(int)a0 structuralBlob:(id *)a1 contentBlob:(id *)a2 localBlob:(id *)a3 withMaximumSize:(unsigned long long)a4 error:(id *)a5;
+ (BOOL)loadXattrsFromURL:(id)a0 structuralBlob:(id *)a1 contentBlob:(id *)a2 localBlob:(id *)a3 withMaximumSize:(unsigned long long)a4 error:(id *)a5;
+ (void)loadXattrsFromDictionary:(id)a0 structuralBlob:(id *)a1 contentBlob:(id *)a2;
+ (BOOL)removeXattrsOnFD:(int)a0 includingContentRelated:(BOOL)a1 error:(id *)a2;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addXattrs:(id)a0;
- (BOOL)applyToFileDescriptor:(int)a0 error:(id *)a1;
- (void)clearXattrs;
- (id)xattrsAtIndex:(unsigned long long)a0;
- (unsigned long long)xattrsCount;

@end
