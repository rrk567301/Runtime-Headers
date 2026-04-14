@class NSString, NSMutableArray;

@interface PHImportExceptionRecorder : NSObject <PHImportExceptionRecorder>

@property (readonly, nonatomic) NSMutableArray *exceptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)addException:(id)a0;
- (id)addExceptionWithType:(long long)a0 path:(id)a1 underlyingError:(id)a2 file:(char *)a3 line:(unsigned long long)a4;
- (void)addExceptions:(id)a0;
- (void)logErrors;
- (id)logForExceptions;

@end
