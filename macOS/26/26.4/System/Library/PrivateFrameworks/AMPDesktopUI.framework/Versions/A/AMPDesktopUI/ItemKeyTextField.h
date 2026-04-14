@class ViewSpyInfoKeyItem, NSObject;

@interface ItemKeyTextField : NSTextField

@property (retain, nonatomic) ViewSpyInfoKeyItem *item;
@property (retain, nonatomic) NSObject *targetObject;

+ (id)fieldWithItem:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)changed:(id)a0;

@end
