@class NSArray;

@interface DMFTaskRequest : CATTaskRequest

@property (class, readonly, copy, nonatomic) NSArray *permittedPlatforms;
@property (class, readonly, nonatomic) char isPermittedOnCurrentPlatform;
@property (class, readonly, nonatomic) char isPermittedOnSystemConnection;
@property (class, readonly, nonatomic) char isPermittedOnUserConnection;

+ (char)isPermittedOnPlatform:(unsigned long long)a0;

@end
