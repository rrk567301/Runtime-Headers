@class NSMutableArray;

@interface BRFieldXattrBlob : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *xattrs;

+ (BOOL)loadXattrsFromFD:(int)a0 structuralBlob:(id *)a1 contentBlob:(id *)a2 localBlob:(id *)a3 withMaximumSize:(unsigned long long)a4 error:(id *)a5;
+ (Class)xattrsType;
+ (BOOL)removeXattrsOnFD:(int)a0 includingContentRelated:(BOOL)a1 error:(id *)a2;
+ (BOOL)loadXattrsFromURL:(id)a0 structuralBlob:(id *)a1 contentBlob:(id *)a2 localBlob:(id *)a3 withMaximumSize:(unsigned long long)a4 error:(id *)a5;
+ (void)loadXattrsFromDictionary:(id)a0 structuralBlob:(id *)a1 contentBlob:(id *)a2;
+ (id)loadXattrsFromFD:(int)a0 withMaximumSize:(unsigned long long)a1 error:(id *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)shortDescription;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addXattrs:(id)a0;
- (BOOL)applyToFileDescriptor:(int)a0 error:(id *)a1;
- (void)clearXattrs;
- (id)extendedAttributesDictionary;
- (id)xattrsAtIndex:(unsigned long long)a0;
- (unsigned long long)xattrsCount;

@end
