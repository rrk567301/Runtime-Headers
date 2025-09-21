@class NSNumber;

@interface SFShareSheetSessionResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *presentationMs;
@property (readonly, nonatomic) char success;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPresentationMs:(id)a0 success:(char)a1;

@end
