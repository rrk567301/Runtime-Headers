@class PXOperationStatus, NSString;

@interface PXGAssetDecorationViewConfiguration : NSObject <NSCopying, PXGViewUserData>

@property (copy, nonatomic) PXOperationStatus *loadStatus;
@property (readonly, nonatomic) long long viewFloatingAxis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
