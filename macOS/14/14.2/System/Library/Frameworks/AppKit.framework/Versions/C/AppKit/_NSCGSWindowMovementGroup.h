@class NSArray, NSMutableSet;

@interface _NSCGSWindowMovementGroup : NSObject {
    NSMutableSet *_windows;
}

@property (readonly) NSArray *windows;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)addWindow:(id)a0;
- (id)initWithWindows:(id)a0;
- (void)removeWindow:(id)a0;
- (void)setWindows:(id)a0;

@end
