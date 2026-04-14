@class ViewSpyInfoKeyItem, NSObject;

@interface KeyItemButton : NSButton

@property (retain, nonatomic) ViewSpyInfoKeyItem *item;
@property (retain, nonatomic) NSObject *targetObject;
@property (nonatomic) BOOL rolledOver;

- (void).cxx_destruct;
- (id)init;
- (void)clicked:(id)a0;

@end
