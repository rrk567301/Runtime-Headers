@class NSString, CKDAppContainerTuple;

@interface CKDAppContainerAccountTuple : NSObject <NSCopying>

@property (retain, nonatomic) CKDAppContainerTuple *appContainerTuple;
@property (copy, nonatomic) NSString *accountID;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)initWithAppContainerTuple:(id)a0 accountID:(id)a1;

@end
