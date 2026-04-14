@interface CRKClassroomConfiguration : NSObject

+ (id)configurationSource;
+ (void)setConfiguration:(id)a0 completion:(id /* block */)a1;
+ (void)fetchConfiguration:(id /* block */)a0;
+ (id)setOfActiveRestrictionUUIDs:(id)a0;

@end
