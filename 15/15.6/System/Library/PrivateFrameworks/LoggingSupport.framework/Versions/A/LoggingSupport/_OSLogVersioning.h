@class _OSLogCollectionReference;

@interface _OSLogVersioning : NSObject {
    _OSLogCollectionReference *_lcr;
    char _closeOnRelease;
}

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) char hasEndTimeRef;
@property (readonly, nonatomic) long long version;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (char)checkTimesyncDB:(char *)a0 error:(id *)a1;
- (id)initWithCollection:(id)a0 closeOnRelease:(char)a1 error:(id *)a2;
- (id)initWithCollection:(id)a0 error:(id *)a1;
- (char)performDestructiveUpdates:(id *)a0;
- (char)repairTimesyncDB:(id *)a0;

@end
