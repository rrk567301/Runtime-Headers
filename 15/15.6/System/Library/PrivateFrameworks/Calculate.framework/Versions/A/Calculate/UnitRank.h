@class NSLocale;

@interface UnitRank : NSObject

@property (nonatomic) int unitID;
@property (nonatomic) float rank;
@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) id context;
@property (nonatomic) char isConfusable;
@property (nonatomic) int tokenType;
@property (nonatomic) char isLaTeX;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithUnitID:(int)a0 rank:(float)a1 locale:(id)a2;
- (id)initWithUnitID:(int)a0 rank:(float)a1 locale:(id)a2 context:(id)a3;

@end
