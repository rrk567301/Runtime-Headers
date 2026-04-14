@class NSString;

@interface PXNavigationListActionItem : PXNavigationListItem {
    NSString *_glyphImageName;
}

@property (readonly, nonatomic) NSString *actionType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)representedObject;
- (id)initWithActionType:(id)a0;
- (id)glyphImageName;

@end
