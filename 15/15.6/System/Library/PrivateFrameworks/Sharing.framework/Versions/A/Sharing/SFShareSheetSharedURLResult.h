@class NSURL, NSError;

@interface SFShareSheetSharedURLResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSURL *sharedURL;
@property (readonly, nonatomic) NSError *error;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSharedURL:(id)a0 error:(id)a1;

@end
