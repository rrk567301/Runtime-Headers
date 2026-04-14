@class NSData;

@interface BRCBasehashSaltInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSData *childBasehashSalt;
@property (retain, nonatomic) NSData *childBasehashSaltValidation;
@property (nonatomic) unsigned int saltingState;
@property (retain, nonatomic) NSData *basehashSaltValidation;

- (id)initWithRecord:(id)a0;
- (id)initFromResultSet:(id)a0 pos:(int)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithBasehashSaltInfo:(id)a0;

@end
