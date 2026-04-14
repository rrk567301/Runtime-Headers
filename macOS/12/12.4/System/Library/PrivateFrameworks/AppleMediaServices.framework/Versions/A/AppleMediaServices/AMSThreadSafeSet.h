@class NSArray, AMSThreadSafeObject;

@interface AMSThreadSafeSet : NSObject

@property (retain) AMSThreadSafeObject *backingSet;
@property (readonly, copy) NSArray *allObjects;
@property (readonly) unsigned long long count;

- (id)init;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (void).cxx_destruct;

@end
