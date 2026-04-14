@class NSString;

@interface SCTApplicatonGRL : SCTGRL {
    NSString *mAppName;
    NSString *mAppBundleIdentifier;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)title;
- (id)representativeIconForSelectedState:(BOOL)a0;
- (id)initWithProcessInfo:(id)a0 withParent:(id)a1;

@end
