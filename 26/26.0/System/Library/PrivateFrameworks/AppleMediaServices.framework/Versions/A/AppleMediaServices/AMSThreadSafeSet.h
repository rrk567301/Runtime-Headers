@class NSArray, AMSThreadSafeObject;

@interface AMSThreadSafeSet : NSObject

@property (retain) AMSThreadSafeObject *backingSet;
@property (readonly, copy) NSArray *allObjects;
@property (readonly) unsigned long long count;

- (void)removeObject:(id)a0;
- (id)init;
- (void)addObject:(id)a0;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;

@end
