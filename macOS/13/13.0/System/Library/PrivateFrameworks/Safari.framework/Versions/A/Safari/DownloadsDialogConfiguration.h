@class NSString;

@interface DownloadsDialogConfiguration : AlertDialogConfiguration

@property (readonly, copy, nonatomic) NSString *domain;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (long long)dialogType;
- (id)initWithDomain:(id)a0 originStringForAccessibility:(id)a1;

@end
