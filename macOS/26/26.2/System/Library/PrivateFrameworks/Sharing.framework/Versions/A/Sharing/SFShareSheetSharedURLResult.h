@class NSURL, NSError;

@interface SFShareSheetSharedURLResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *sharedURL;
@property (readonly, nonatomic) NSError *error;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSharedURL:(id)a0 error:(id)a1;

@end
