@interface CRKASMCourseSizeLimitingRosterProvider : CRKASMRosterProviderDecoratorBase

@property (readonly, nonatomic) long long maxUserCount;
@property (readonly, nonatomic) long long maxTrustedUserCount;

- (id)initWithRosterProvider:(id)a0 maxUserCount:(long long)a1 maxTrustedUserCount:(long long)a2;
- (void)createCourseWithProperties:(id)a0 completion:(id /* block */)a1;
- (void)updateCourseWithIdentifier:(id)a0 properties:(id)a1 completion:(id /* block */)a2;
- (BOOL)isLegalToUpdateCourse:(id)a0 withProperties:(id)a1 error:(id *)a2;
- (id)courseForIdentifier:(id)a0;

@end
