@class NSArray, NSMutableArray;

@interface MTRPluginPBMCommandWithRequiredResponses : PBCodable <NSCopying>

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) NSArray *commandWithRequiredResponses;
@property (retain, nonatomic) NSMutableArray *commandWithRequiredResponseValues;

+ (Class)commandWithRequiredResponseValueType;
+ (id)commandWithRequiredResponses:(id)a0;
+ (id)commandWithRequiredResponsesFromMessage:(id)a0;

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
- (void)addCommandWithRequiredResponseValue:(id)a0;
- (void)clearCommandWithRequiredResponseValues;
- (id)commandWithRequiredResponseValueAtIndex:(unsigned long long)a0;
- (unsigned long long)commandWithRequiredResponseValuesCount;

@end
