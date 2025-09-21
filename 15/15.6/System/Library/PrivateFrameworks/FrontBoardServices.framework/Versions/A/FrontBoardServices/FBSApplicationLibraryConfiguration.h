@interface FBSApplicationLibraryConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) Class applicationInfoClass;
@property (retain, nonatomic) Class applicationPlaceholderClass;
@property (nonatomic) char allowConcurrentLoading;
@property (nonatomic, getter=isPersonaAware) char personaAware;
@property (copy, nonatomic) id /* block */ installedApplicationFilter;
@property (copy, nonatomic) id /* block */ placeholderFilter;
@property (copy, nonatomic) id /* block */ applicationIdentityFilter;
@property (copy, nonatomic) id /* block */ placeholderIdentityFilter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
