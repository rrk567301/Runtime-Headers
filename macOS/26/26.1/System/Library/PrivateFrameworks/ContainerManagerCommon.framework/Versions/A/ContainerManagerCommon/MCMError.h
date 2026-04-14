@class NSString;

@interface MCMError : NSObject <NSCopying>

@property (class, readonly, nonatomic) MCMError *notEntitled;
@property (class, readonly, nonatomic) MCMError *unsupported;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) int POSIXerrno;
@property (readonly, nonatomic) NSString *message;

- (id)fullDescription;
- (struct container_error_extended_s { unsigned long long x0; unsigned long long x1; char *x2; int x3; char *x4; struct container_query_s *x5; struct container_references_s *x6; struct container_notify_s *x7; } *)libsystemError;
- (BOOL)isEqualToMCMError:(id)a0;
- (unsigned long long)hash;
- (id)initWithLibsystemError:(struct container_error_extended_s { unsigned long long x0; unsigned long long x1; char *x2; int x3; char *x4; struct container_query_s *x5; struct container_references_s *x6; struct container_notify_s *x7; } *)a0;
- (id)initWithErrorType:(unsigned long long)a0 category:(unsigned long long)a1 message:(id)a2;
- (id)initWithNSError:(id)a0 url:(id)a1 defaultErrorType:(unsigned long long)a2;
- (id)description;
- (id)initWithErrorType:(unsigned long long)a0;
- (id)initWithErrorType:(unsigned long long)a0 category:(unsigned long long)a1 path:(id)a2 POSIXerrno:(int)a3;
- (id)initWithErrorType:(unsigned long long)a0 category:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithErrorType:(unsigned long long)a0 category:(unsigned long long)a1 path:(id)a2 POSIXerrno:(int)a3 message:(id)a4;
- (id)init;

@end
