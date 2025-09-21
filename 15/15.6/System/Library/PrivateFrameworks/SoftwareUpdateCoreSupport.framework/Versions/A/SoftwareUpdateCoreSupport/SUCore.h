@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SUCore : NSObject

@property (retain, nonatomic) NSString *baseDomain;
@property (retain, nonatomic) NSString *filesystemBaseDir;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *waitedOperationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *miscellaneousTaksQueue;

+ (id)stringFromDate:(id)a0;
+ (id)sharedCore;
+ (char)stringIsEqual:(id)a0 to:(id)a1;
+ (id)errorNameForCode:(long long)a0;
+ (char)objectIsEqual:(id)a0 to:(id)a1;
+ (char)dataIsEqual:(id)a0 to:(id)a1;
+ (char)dateIsEqual:(id)a0 to:(id)a1;
+ (char)arrayIsEqual:(id)a0 to:(id)a1;
+ (id)beginTransactionWithName:(id)a0;
+ (char)dictionaryIsEqual:(id)a0 to:(id)a1;
+ (void)endTransaction:(id)a0 withName:(id)a1;
+ (char)errorIsEqual:(id)a0 to:(id)a1;
+ (id)getFileMetadata:(const char *)a0 forKey:(id)a1;
+ (id)limitString:(id)a0 toMaxLength:(unsigned long long)a1 providingSubstitutionMap:(id)a2;
+ (char)numberIsEqual:(id)a0 to:(id)a1;
+ (char)setFileMetadata:(const char *)a0 forKey:(id)a1 value:(id)a2;
+ (id)sharedSUCoreDomainAppending:(id)a0;
+ (id)stringFromTriState:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)useDomain:(id)a0;
- (id)buildError:(long long)a0 underlying:(id)a1 description:(id)a2;
- (id)commonDomain;
- (id)commonFilesystemBaseDir;
- (id)selectCompletionQueue:(id)a0;
- (id)selectDelegateCallbackQueue:(id)a0;
- (void)useFilesystemBaseDir:(id)a0;

@end
