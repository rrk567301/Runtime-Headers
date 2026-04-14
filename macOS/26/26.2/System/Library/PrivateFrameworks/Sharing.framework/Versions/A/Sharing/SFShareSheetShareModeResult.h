@class NSError;

@interface SFShareSheetShareModeResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL supportsCollaboration;
@property (readonly, nonatomic) NSError *error;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSupportsCollaboration:(BOOL)a0 error:(id)a1;

@end
