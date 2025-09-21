@class _LSDatabase, NSString, reason;

@interface _LSBindingForLog : NSObject {
    _LSDatabase *_db;
    struct LSBinding { unsigned int bundle; struct LSBundleData *bundleData; unsigned int claim; struct *claimData; reason *userInfo; NSString *x0; unsigned long long provenance; } _binding;
}

- (id)description;
- (id)initWithState:(const void *)a0 binding:(const struct LSBinding { unsigned int x0; struct LSBundleData *x1; unsigned int x2; struct *x3; id x4; id x5; unsigned long long x6; } *)a1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)redactedDescription;

@end
