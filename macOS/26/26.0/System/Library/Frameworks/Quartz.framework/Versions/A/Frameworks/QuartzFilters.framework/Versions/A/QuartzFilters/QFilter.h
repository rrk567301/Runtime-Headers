@class QFilterOwner, NSString, QFilterInfo, NSURL, NSMutableArray;

@interface QFilter : NSObject {
    NSString *mName;
    NSURL *mURL;
    QFilterOwner *mOwner;
    QFilterInfo *mInfo;
    NSMutableArray *mComponents;
}

+ (id)filterWithName:(id)a0 url:(id)a1 filterData:(id)a2 domains:(id)a3 comments:(id)a4 readOnly:(BOOL)a5 owner:(id)a6;

- (id)components;
- (void)dealloc;
- (void)setName:(id)a0;
- (long long)compare:(id)a0;
- (id)init;
- (id)owner;
- (id)addComponent:(id)a0;
- (id)name;
- (void)removeComponent:(id)a0;
- (id)addComponentByID:(int)a0;
- (void)componentAddNotification:(id)a0;
- (void)componentRemoveNotification:(id)a0;
- (void)componentUpdateNotification:(id)a0;
- (id)componentsAtIndexes:(id)a0;
- (id)createComponentByID:(int)a0;
- (id)filterInfo;
- (id)findComponentByID:(int)a0;
- (id)initWithName:(id)a0 url:(id)a1 filterData:(id)a2 domains:(id)a3 comments:(id)a4 readOnly:(BOOL)a5 owner:(id)a6;
- (void)initializeComponents;
- (void)insertComponents:(id)a0 atIndexes:(id)a1;
- (id)keysForValuesToObserveForUndo;
- (void)removeComponentsAtIndexes:(id)a0;

@end
