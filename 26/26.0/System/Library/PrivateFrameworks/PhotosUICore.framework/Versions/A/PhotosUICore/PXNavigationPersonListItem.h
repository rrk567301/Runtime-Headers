@protocol NSCopying, NSObject;

@interface PXNavigationPersonListItem : PXNavigationListItem {
    id<NSCopying, NSObject> _representedObject;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)representedObject;
- (id)glyphImageName;
- (id)initWithPerson:(id)a0 reorderable:(BOOL)a1 topLevelIdentifier:(id)a2;

@end
