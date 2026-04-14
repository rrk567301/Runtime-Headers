@interface OSLaunchdDomain : NSObject {
    int _type;
    unsigned long long _handle;
}

+ (id)loginwindowDomain;
+ (id)domainForPid:(int)a0;
+ (id)createDomainForRoleAccount:(unsigned int)a0 sessionType:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
+ (id)systemDomain;
+ (id)currentDomain;
+ (id)domainForAsid:(int)a0;
+ (id)domainForUser:(unsigned int)a0;
+ (id)domainForRoleAccountUser:(unsigned int)a0;
+ (unsigned int)_createDomainOptions2flags:(unsigned long long)a0;

- (BOOL)unpendLaunches:(id *)a0;
- (unsigned long long)hash;
- (id)initWithType:(int)a0 handle:(unsigned long long)a1;
- (BOOL)initiateRemoval:(id *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
