@class NSString;

@interface PXNavigationListActionItem : PXNavigationListItem {
    NSString *_glyphImageName;
}

@property (readonly, nonatomic) NSString *actionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)representedObject;
- (id)initWithActionType:(id)a0;
- (id)glyphImageName;

@end
