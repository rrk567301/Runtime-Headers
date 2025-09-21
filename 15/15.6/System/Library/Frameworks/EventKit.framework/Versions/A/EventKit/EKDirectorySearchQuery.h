@class NSSet;

@interface EKDirectorySearchQuery : NSObject

@property (retain, nonatomic) NSSet *terms;
@property (nonatomic) char findGroups;
@property (nonatomic) char findLocations;
@property (nonatomic) char findResources;
@property (nonatomic) char findUsers;
@property (nonatomic) unsigned long long resultLimit;

- (void).cxx_destruct;

@end
