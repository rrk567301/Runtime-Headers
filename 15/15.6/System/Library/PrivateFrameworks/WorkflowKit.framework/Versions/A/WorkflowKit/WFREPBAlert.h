@class NSString, NSMutableArray;

@interface WFREPBAlert : PBCodable <NSCopying> {
    struct { unsigned char preferredStyle : 1; } _has;
}

@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasMessage;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSMutableArray *buttons;
@property (nonatomic) char hasPreferredStyle;
@property (nonatomic) int preferredStyle;

+ (Class)buttonsType;

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
- (id)buttonsAtIndex:(unsigned long long)a0;
- (void)addButtons:(id)a0;
- (unsigned long long)buttonsCount;
- (void)clearButtons;
- (int)StringAsPreferredStyle:(id)a0;
- (id)preferredStyleAsString:(int)a0;

@end
