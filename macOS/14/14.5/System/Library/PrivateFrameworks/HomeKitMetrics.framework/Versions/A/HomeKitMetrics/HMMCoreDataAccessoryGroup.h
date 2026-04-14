@class NSUUID;

@interface HMMCoreDataAccessoryGroup : HMMCoreDataHomeGroup

@property (copy, nonatomic) NSUUID *accessoryUUID;

+ (id)fetchRequest;

- (id)groupSpecifier;

@end
