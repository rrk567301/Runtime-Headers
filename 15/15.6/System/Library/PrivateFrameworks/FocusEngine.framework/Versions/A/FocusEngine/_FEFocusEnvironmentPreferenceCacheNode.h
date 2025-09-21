@class NSArray, NSHashTable;
@protocol _FEFocusEnvironment;

@interface _FEFocusEnvironmentPreferenceCacheNode : NSObject {
    NSHashTable *_parentNodes;
    struct { unsigned char resolved : 1; unsigned char resolvedExplicitly : 1; } _flags;
}

@property (readonly, nonatomic, getter=isResolved) char resolved;
@property (readonly, nonatomic) id<_FEFocusEnvironment> environment;
@property (readonly, nonatomic) id<_FEFocusEnvironment> resolvedEnvironment;
@property (copy, nonatomic) NSArray *childNodes;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)resolve:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (void)_reevaluateResolution;
- (void)_resolve:(id)a0 explicitly:(char)a1;
- (void)_unresolve;

@end
