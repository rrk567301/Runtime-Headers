@class NSString, NSMutableArray;

@interface WFREPBAlert : PBCodable <NSCopying> {
    struct { unsigned char preferredStyle : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasMessage;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSMutableArray *buttons;
@property (nonatomic) BOOL hasPreferredStyle;
@property (nonatomic) int preferredStyle;

+ (Class)buttonsType;

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
- (void)clearButtons;
- (unsigned long long)buttonsCount;
- (void)addButtons:(id)a0;
- (id)buttonsAtIndex:(unsigned long long)a0;
- (id)preferredStyleAsString:(int)a0;
- (int)StringAsPreferredStyle:(id)a0;

@end
