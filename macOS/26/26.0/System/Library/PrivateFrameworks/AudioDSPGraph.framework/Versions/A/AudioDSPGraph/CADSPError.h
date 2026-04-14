@class NSString, NSNumber;

@interface CADSPError : NSError

@property (readonly, nonatomic) long long errorCode;
@property (readonly, nonatomic) int errorStatus;
@property (readonly, copy, nonatomic) NSString *errorSourceFile;
@property (readonly, copy, nonatomic) NSNumber *errorSourceLine;

+ (id)errorWithCode:(long long)a0;
+ (void)initialize;
+ (id)errorWithCode:(long long)a0 userInfo:(const struct CADSPErrorUserInfo { int x0; struct __CFString *x1; char *x2; unsigned int x3; } *)a1;
+ (id)_errorForUnsupportedRemoteProcessingBlockElement:(unsigned int)a0 connectionType:(id)a1;
+ (id)_errorForUnsupportedRemoteProcessingBlockScope:(unsigned int)a0 connectionType:(id)a1;
+ (id)createWithRealTimeError:(id)a0;
+ (id)errorWithCode:(long long)a0 descriptionFormat:(id)a1;

- (long long)errorCode;
- (int)errorStatus;
- (id)init;
- (id)initWithCode:(long long)a0;
- (id)initWithCode:(long long)a0 userInfo:(const struct CADSPErrorUserInfo { int x0; struct __CFString *x1; char *x2; unsigned int x3; } *)a1;
- (id)errorSourceLine;
- (id)errorSourceFile;
- (id)initWithRealTimeError:(id)a0;

@end
