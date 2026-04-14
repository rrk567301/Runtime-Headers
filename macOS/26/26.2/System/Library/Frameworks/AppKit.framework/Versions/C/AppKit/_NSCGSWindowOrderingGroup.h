@class NSArray, NSPointerArray;

@interface _NSCGSWindowOrderingGroup : NSObject {
    NSPointerArray *_windows;
}

@property (readonly) NSArray *windows;
@property (readonly, getter=isEmpty) BOOL empty;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)addWindow:(id)a0 aboveWindow:(id)a1;
- (id)initWithWindows:(id)a0;
- (void)removeWindow:(id)a0;

@end
