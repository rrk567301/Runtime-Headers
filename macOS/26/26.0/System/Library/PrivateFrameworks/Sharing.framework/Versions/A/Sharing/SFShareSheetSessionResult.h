@class NSNumber;

@interface SFShareSheetSessionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *presentationMs;
@property (readonly, nonatomic) BOOL success;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPresentationMs:(id)a0 success:(BOOL)a1;

@end
