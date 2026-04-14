@class EFLocked, EMQuery, NSArray, NSString, EMThread, NSObject, EMThreadScope;
@protocol OS_os_log;

@interface EDInMemoryThread : NSObject <EFLoggable, NSCopying>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EMThreadScope *threadScope;
@property (readonly, nonatomic) EMQuery *originatingQuery;
@property (retain, nonatomic) EFLocked *state;
@property (readonly, nonatomic) EMThread *thread;
@property (readonly, copy, nonatomic) NSArray *messages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_dateSortDescriptors;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)addMessages:(id)a0;
- (id)_removeMessages:(id)a0 andChangeMessages:(id)a1 threadIsEmpty:(BOOL *)a2;
- (id)changeMessages:(id)a0 forKeyPaths:(id)a1 threadIsEmpty:(BOOL *)a2;
- (id)initWithMessages:(id)a0 originatingQuery:(id)a1 threadScope:(id)a2;
- (id)removeMessages:(id)a0 threadIsEmpty:(BOOL *)a1;
- (id)updateMessage:(id)a0 fromOldObjectID:(id)a1;

@end
