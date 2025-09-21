@class ViewSpyInfoKeyItem, NSObject;

@interface KeyItemButton : NSButton

@property (retain, nonatomic) ViewSpyInfoKeyItem *item;
@property (retain, nonatomic) NSObject *targetObject;
@property (nonatomic) char rolledOver;

- (id)init;
- (void).cxx_destruct;
- (void)clicked:(id)a0;

@end
