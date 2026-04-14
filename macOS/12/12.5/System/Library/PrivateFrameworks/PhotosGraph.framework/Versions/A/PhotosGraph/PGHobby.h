@class NSSet, NSMutableSet;

@interface PGHobby : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) NSSet *personNodes;
@property (retain, nonatomic) NSMutableSet *momentNodes;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
