@class NSArray, NSHashTable;
@protocol UIFocusEnvironment;

@interface _UIFocusEnvironmentPreferenceCacheNode : NSObject {
    NSHashTable *_parentNodes;
    struct { unsigned char resolved : 1; unsigned char resolvedExplicitly : 1; } _flags;
}

@property (readonly, nonatomic, getter=isResolved) BOOL resolved;
@property (readonly, nonatomic) id<UIFocusEnvironment> environment;
@property (readonly, nonatomic) id<UIFocusEnvironment> resolvedEnvironment;
@property (copy, nonatomic) NSArray *childNodes;

- (id)initWithEnvironment:(id)a0;
- (void)resolve:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)_reevaluateResolution;
- (void)_resolve:(id)a0 explicitly:(BOOL)a1;
- (void)_unresolve;

@end
