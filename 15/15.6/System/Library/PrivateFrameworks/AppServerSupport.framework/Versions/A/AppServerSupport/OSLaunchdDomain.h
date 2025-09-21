@interface OSLaunchdDomain : NSObject {
    int _type;
    unsigned long long _handle;
}

+ (id)currentDomain;
+ (unsigned int)_createDomainOptions2flags:(unsigned long long)a0;
+ (id)createDomainForRoleAccount:(unsigned int)a0 sessionType:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
+ (id)domainForAsid:(int)a0;
+ (id)domainForPid:(int)a0;
+ (id)domainForRoleAccountUser:(unsigned int)a0;
+ (id)domainForUser:(unsigned int)a0;
+ (id)loginwindowDomain;
+ (id)systemDomain;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)unpendLaunches:(id *)a0;
- (id)initWithType:(int)a0 handle:(unsigned long long)a1;
- (char)initiateRemoval:(id *)a0;

@end
