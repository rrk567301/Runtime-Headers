@class NSArray, NSPointerArray;

@interface _NSCGSWindowMovementGroup : NSObject {
    NSPointerArray *_windows;
}

@property (readonly) NSArray *windows;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)addWindow:(id)a0;
- (id)initWithWindows:(id)a0;
- (void)removeWindow:(id)a0;
- (void)setWindows:(id)a0;

@end
