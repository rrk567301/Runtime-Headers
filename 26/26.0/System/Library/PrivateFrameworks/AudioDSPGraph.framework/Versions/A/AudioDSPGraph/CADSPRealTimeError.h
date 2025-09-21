@class NSString, NSNumber;

@interface CADSPRealTimeError : NSObject <NSCopying>

@property (readonly, nonatomic) long long errorCode;
@property (readonly, nonatomic) int errorStatus;
@property (readonly, copy, nonatomic) NSString *errorSourceFile;
@property (readonly, copy, nonatomic) NSNumber *errorSourceLine;

+ (void)initialize;

- (long long)errorCode;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)errorStatus;
- (id)init;
- (id)initWithCode:(long long)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCode:(long long)a0 userInfo:(const struct CADSPErrorUserInfo { int x0; struct __CFString *x1; char *x2; unsigned int x3; } *)a1;
- (id)errorSourceLine;
- (id)errorSourceFile;

@end
