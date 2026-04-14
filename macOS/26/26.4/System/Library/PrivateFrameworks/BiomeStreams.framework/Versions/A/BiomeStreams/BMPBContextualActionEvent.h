@class NSString, NSMutableArray;

@interface BMPBContextualActionEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasAppName;
@property (retain, nonatomic) NSString *appName;
@property (readonly, nonatomic) BOOL hasActionName;
@property (retain, nonatomic) NSString *actionName;
@property (retain, nonatomic) NSMutableArray *contents;
@property (retain, nonatomic) NSMutableArray *parameters;

+ (Class)contentType;
+ (Class)parameterType;

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
- (void)clearContents;
- (id)contentAtIndex:(unsigned long long)a0;
- (unsigned long long)parametersCount;
- (void)clearParameters;
- (void)addContent:(id)a0;
- (unsigned long long)contentsCount;
- (id)parameterAtIndex:(unsigned long long)a0;
- (void)addParameter:(id)a0;

@end
