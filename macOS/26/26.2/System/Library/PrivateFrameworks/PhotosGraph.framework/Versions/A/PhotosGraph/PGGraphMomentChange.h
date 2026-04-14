@class NSString;

@interface PGGraphMomentChange : PGGraphChange

@property (readonly, nonatomic) NSString *momentUUID;
@property (readonly, nonatomic) unsigned long long updateTypes;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMomentUUID:(id)a0 updateTypes:(unsigned long long)a1;
- (void)mergeChange:(id)a0;

@end
