@class ICLibraryAuthServiceClientTokenResult, NSError, NSDate;

@interface ICLibraryAuthServiceClientTokenStatus : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) ICLibraryAuthServiceClientTokenResult *tokenResult;
@property (copy, nonatomic) NSError *lastError;
@property (nonatomic) double lastUpdateAttemptTime;
@property (nonatomic) char shouldExcludeFromBackgroundRefresh;
@property (readonly, copy, nonatomic) NSDate *lastUpdatedDate;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
