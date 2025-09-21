@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SUCore : NSObject

@property (retain) NSString *baseDomain;
@property (retain) NSString *filesystemBaseDir;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *waitedOperationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *miscellaneousTaksQueue;

+ (id)errorNameForCode:(long long)a0;
+ (BOOL)objectIsEqual:(id)a0 to:(id)a1;
+ (id)stringFromDate:(id)a0;
+ (id)beginTransactionWithName:(id)a0;
+ (id)limitString:(id)a0 toMaxLength:(unsigned long long)a1 providingSubstitutionMap:(id)a2;
+ (id)sharedCore;
+ (BOOL)numberIsEqual:(id)a0 to:(id)a1;
+ (BOOL)errorIsEqual:(id)a0 to:(id)a1;
+ (id)getFileMetadata:(const char *)a0 forKey:(id)a1;
+ (void)endTransaction:(id)a0 withName:(id)a1;
+ (BOOL)dateIsEqual:(id)a0 to:(id)a1;
+ (id)sharedSUCoreDomainAppending:(id)a0;
+ (BOOL)arrayIsEqual:(id)a0 to:(id)a1;
+ (id)stringFromTriState:(long long)a0;
+ (BOOL)stringIsEqual:(id)a0 to:(id)a1;
+ (BOOL)dataIsEqual:(id)a0 to:(id)a1;
+ (BOOL)setFileMetadata:(const char *)a0 forKey:(id)a1 value:(id)a2;
+ (BOOL)dictionaryIsEqual:(id)a0 to:(id)a1;

- (id)selectCompletionQueue:(id)a0;
- (void)useFilesystemBaseDir:(id)a0;
- (id)init;
- (void)useDomain:(id)a0;
- (id)commonFilesystemBaseDir;
- (id)commonDomain;
- (id)buildError:(long long)a0 underlying:(id)a1 description:(id)a2;
- (id)selectDelegateCallbackQueue:(id)a0;
- (void).cxx_destruct;

@end
