@interface WFRemoteServerAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (id)init;
- (unsigned long long)status;
- (id)name;
- (id)icon;

@end
