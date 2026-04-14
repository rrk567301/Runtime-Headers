@protocol NSCopying, NSObject;

@interface PXNavigationSocialGroupListItem : PXNavigationListItem {
    id<NSCopying, NSObject> _representedObject;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)representedObject;
- (id)glyphImageName;
- (id)initWithSocialGroup:(id)a0 reorderable:(BOOL)a1 topLevelIdentifier:(id)a2;

@end
