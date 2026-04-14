@protocol NSCopying, NSObject;

@interface PXNavigationSocialGroupListItem : PXNavigationListItem {
    id<NSCopying, NSObject> _representedObject;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)representedObject;
- (id)glyphImageName;
- (id)initWithSocialGroup:(id)a0 reorderable:(BOOL)a1 topLevelIdentifier:(id)a2;

@end
