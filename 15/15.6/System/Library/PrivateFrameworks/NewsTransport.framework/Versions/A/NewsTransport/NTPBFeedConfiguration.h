@class NSString;

@interface NTPBFeedConfiguration : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasFreeAFeedID;
@property (retain, nonatomic) NSString *freeAFeedID;
@property (readonly, nonatomic) char hasFreeBFeedID;
@property (retain, nonatomic) NSString *freeBFeedID;
@property (readonly, nonatomic) char hasFreeCFeedID;
@property (retain, nonatomic) NSString *freeCFeedID;
@property (readonly, nonatomic) char hasPaidAFeedID;
@property (retain, nonatomic) NSString *paidAFeedID;
@property (readonly, nonatomic) char hasPaidBFeedID;
@property (retain, nonatomic) NSString *paidBFeedID;
@property (readonly, nonatomic) char hasPaidCFeedID;
@property (retain, nonatomic) NSString *paidCFeedID;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
