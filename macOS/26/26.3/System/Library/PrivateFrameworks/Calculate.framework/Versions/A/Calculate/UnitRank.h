@class NSString, NSLocale;

@interface UnitRank : NSObject

@property (nonatomic) int unitID;
@property (nonatomic) float rank;
@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) id context;
@property (nonatomic) BOOL isConfusable;
@property (nonatomic) int tokenType;
@property (retain, nonatomic) NSString *normalized;
@property (nonatomic) BOOL isLaTeX;

- (id)description;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithUnitID:(int)a0 rank:(float)a1 locale:(id)a2;
- (id)initWithUnitID:(int)a0 rank:(float)a1 locale:(id)a2 context:(id)a3;

@end
