@class NSString, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowPickerSection : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasFooter;
@property (retain, nonatomic) NSString *footer;
@property (retain, nonatomic) NSMutableArray *items;

+ (Class)itemsType;

- (id)itemsAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)itemsCount;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)clearItems;
- (void)writeTo:(id)a0;
- (void)addItems:(id)a0;

@end
