@class NSObject;
@protocol OS_dispatch_queue;

@interface IoRegisterClient : NSObject

@property (retain) NSObject<OS_dispatch_queue> *internalQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)_collectEntryInfo:(unsigned int)a0 propertyKeys:(id)a1 planeName:(const char *)a2;
- (BOOL)_isMatch:(unsigned int)a0 onClassNames:(id)a1;
- (BOOL)_isMatch:(unsigned int)a0 onKeys:(id)a1 planeName:(const char *)a2 results:(id)a3;
- (void)_searchEntry:(unsigned int)a0 hasMatchedDepth:(unsigned long long)a1 currentDepth:(unsigned long long)a2 maxDepth:(unsigned long long)a3 classNames:(id)a4 keys:(id)a5 planeName:(const char *)a6 results:(id)a7;
- (id)fetchEntriesForClasses:(id)a0 depth:(unsigned long long)a1 keys:(id)a2 plane:(id)a3 error:(id *)a4;

@end
