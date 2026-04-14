@class NSString, CKDAppContainerTuple;

@interface CKDAppContainerAccountTuple : NSObject <NSCopying>

@property (readonly, copy, nonatomic) CKDAppContainerTuple *appContainerTuple;
@property (readonly, copy, nonatomic) NSString *accountID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithAppContainerTuple:(id)a0 accountID:(id)a1;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (unsigned long long)hash;
- (id)description;

@end
