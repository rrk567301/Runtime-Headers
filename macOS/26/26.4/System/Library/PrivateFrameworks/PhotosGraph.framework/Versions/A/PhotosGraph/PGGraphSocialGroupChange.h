@class NSString, NSSet;

@interface PGGraphSocialGroupChange : PGGraphChange

@property (readonly, nonatomic) NSString *socialGroupUUID;
@property (readonly, nonatomic) NSSet *propertyNames;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)description;
- (id)initWithSocialGroupUUID:(id)a0 propertyNames:(id)a1;
- (void)mergeChange:(id)a0;

@end
