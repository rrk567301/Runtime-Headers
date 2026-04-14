@class NSString, CRKASMCourseUpdateProperties;
@protocol CRKClassKitRosterRequirements;

@interface CRKUpdateASMClassOperation : CATOperation

@property (readonly, copy, nonatomic) NSString *objectID;
@property (readonly, copy, nonatomic) CRKASMCourseUpdateProperties *properties;
@property (readonly, nonatomic) id<CRKClassKitRosterRequirements> requirements;

- (void).cxx_destruct;
- (void)main;
- (BOOL)isAsynchronous;
- (void)fetchClasses;
- (void)didFetchClasses:(id)a0 error:(id)a1;
- (id)classWithObjectID:(id)a0 inClasses:(id)a1;
- (id)initWithObjectID:(id)a0 properties:(id)a1 requirements:(id)a2;
- (void)applyPropertiesToClass:(id)a0;
- (void)saveClass:(id)a0;
- (id)makePropertyApplicator;

@end
