@class NSString, NSArray, NSSet;

@interface FI_TPreviewOptionsGroup : NSObject {
    struct unique_ptr<const std::vector<TMetadataAttribute>, std::default_delete<const std::vector<TMetadataAttribute>>> { void *__ptr_; } _groupAttributes;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *optionKeys;
@property (readonly, nonatomic) BOOL hasCompositeKeys;
@property (readonly, nonatomic) BOOL hasSpotlightAttributes;
@property (readonly, nonatomic) NSSet *defaultKeys;

+ (id)groupForTitle:(const void *)a0 validKeys:(id)a1;
+ (id)groupForTitle:(const void *)a0 validKeys:(id)a1 hasCompositeKeys:(BOOL)a2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })displayNameForKey:(const void *)a0;
- (id)initWithTitle:(const void *)a0 metaDataGroup:(const void *)a1;
- (id)initWithTitle:(const void *)a0 validKeys:(id)a1 hasCompositeKeys:(BOOL)a2;

@end
