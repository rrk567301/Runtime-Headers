@class NSOperationQueue;
@protocol ODQueryDelegate;

@interface ODQuery : NSObject <NSCopying> {
    void *_internal;
}

@property (nonatomic) id<ODQueryDelegate> delegate;
@property (retain) NSOperationQueue *operationQueue;

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)queryWithNode:(id)a0 forRecordTypes:(id)a1 attribute:(id)a2 matchType:(unsigned int)a3 queryValues:(id)a4 returnAttributes:(id)a5 maximumResults:(long long)a6 error:(id *)a7;

- (unsigned long long)_cfTypeID;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)synchronize;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (id)description;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)resultsAllowingPartial:(BOOL)a0 error:(id *)a1;
- (struct __ODQuery { } *)__getODQueryRef;
- (id)initWithNode:(id)a0 forRecordTypes:(id)a1 attribute:(id)a2 matchType:(unsigned int)a3 queryValues:(id)a4 returnAttributes:(id)a5 maximumResults:(long long)a6 error:(id *)a7;

@end
