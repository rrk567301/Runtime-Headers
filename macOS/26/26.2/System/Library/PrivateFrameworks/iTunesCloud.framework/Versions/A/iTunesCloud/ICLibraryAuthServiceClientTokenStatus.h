@class ICLibraryAuthServiceClientTokenResult, NSError, NSDate;

@interface ICLibraryAuthServiceClientTokenStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) ICLibraryAuthServiceClientTokenResult *tokenResult;
@property (copy, nonatomic) NSError *lastError;
@property (nonatomic) double lastUpdateAttemptTime;
@property (nonatomic) BOOL shouldExcludeFromBackgroundRefresh;
@property (readonly, copy, nonatomic) NSDate *lastUpdatedDate;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
