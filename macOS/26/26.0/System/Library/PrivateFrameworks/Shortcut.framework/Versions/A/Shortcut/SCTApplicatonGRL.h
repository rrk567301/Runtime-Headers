@class NSString;

@interface SCTApplicatonGRL : SCTGRL {
    NSString *mAppName;
    NSString *mAppBundleIdentifier;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)title;
- (id)initWithCoder:(id)a0;
- (id)initWithProcessInfo:(id)a0 withParent:(id)a1;
- (id)representativeIconForSelectedState:(BOOL)a0;

@end
