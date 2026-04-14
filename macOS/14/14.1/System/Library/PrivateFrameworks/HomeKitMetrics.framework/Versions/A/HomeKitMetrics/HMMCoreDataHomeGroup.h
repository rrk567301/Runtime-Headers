@class NSUUID;

@interface HMMCoreDataHomeGroup : HMMCoreDataNamedGroup

@property (copy, nonatomic) NSUUID *homeUUID;

+ (id)fetchRequest;

- (id)groupSpecifier;

@end
