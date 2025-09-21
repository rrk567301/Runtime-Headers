@class NSString, NSDate;

@interface LUITestSEPResult : NSObject

@property (retain) NSString *uuid;
@property (retain) NSDate *backoffEndDate;
@property long long failureCount;
@property (readonly) double backoffSeconds;
@property (readonly) long long failedAttempts;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)authenticate:(id)a0 withPassword:(id)a1 andContextData:(id)a2;
- (id)initWithUserGUID:(id)a0;

@end
