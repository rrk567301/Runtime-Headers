@class NSString;

@interface PXNavigationListActionItem : PXNavigationListItem {
    NSString *_glyphImageName;
}

@property (readonly, nonatomic) NSString *actionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)representedObject;
- (id)initWithActionType:(id)a0;
- (id)glyphImageName;
- (BOOL)isEqualToNavigationListItem:(id)a0;

@end
