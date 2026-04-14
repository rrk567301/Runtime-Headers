@class NSString;

@interface DownloadsDialogConfiguration : AlertDialogConfiguration

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *parentDomain;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)dialogType;
- (id)initWithDomain:(id)a0 parentDomain:(id)a1 originStringForAccessibility:(id)a2;

@end
