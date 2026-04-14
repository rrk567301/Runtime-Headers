@class NSNumber;

@interface MTRAccessGrant : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSNumber *subjectID;
@property (readonly, nonatomic) unsigned char grantedPrivilege;
@property (readonly, nonatomic) unsigned char authenticationMode;

+ (id)accessGrantForNodeID:(id)a0 privilege:(unsigned char)a1;
+ (id)accessGrantForAllNodesWithPrivilege:(unsigned char)a0;
+ (id)accessGrantForCASEAuthenticatedTag:(id)a0 privilege:(unsigned char)a1;
+ (id)accessGrantForGroupID:(id)a0 privilege:(unsigned char)a1;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
