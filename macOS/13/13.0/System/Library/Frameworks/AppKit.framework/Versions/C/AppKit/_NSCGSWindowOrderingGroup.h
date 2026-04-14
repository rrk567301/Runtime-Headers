@class NSArray, NSMutableOrderedSet;

@interface _NSCGSWindowOrderingGroup : NSObject {
    NSMutableOrderedSet *_windows;
}

@property (readonly) NSArray *windows;
@property (readonly, getter=isEmpty) BOOL empty;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)removeWindow:(id)a0;
- (id)initWithWindows:(id)a0;
- (void)addWindow:(id)a0 aboveWindow:(id)a1;

@end
