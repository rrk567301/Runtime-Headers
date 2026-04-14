@interface OSLaunchdDomain : NSObject {
    int _type;
    unsigned long long _handle;
}

+ (id)domainForAsid:(int)a0;
+ (id)systemDomain;
+ (id)domainForPid:(int)a0;
+ (id)domainForUser:(unsigned int)a0;
+ (id)domainForRoleAccountUser:(unsigned int)a0;
+ (unsigned int)_createDomainOptions2flags:(unsigned long long)a0;
+ (id)createDomainForRoleAccount:(unsigned int)a0 sessionType:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
+ (id)loginwindowDomain;
+ (id)currentDomain;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)initiateRemoval:(id *)a0;
- (id)description;
- (BOOL)unpendLaunches:(id *)a0;
- (id)initWithType:(int)a0 handle:(unsigned long long)a1;

@end
