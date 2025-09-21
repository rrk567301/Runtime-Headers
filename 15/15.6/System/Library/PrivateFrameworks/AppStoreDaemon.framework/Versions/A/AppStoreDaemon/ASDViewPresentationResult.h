@class NSError, NSNumber, NSString;

@interface ASDViewPresentationResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSNumber *numberResult;
@property (readonly, nonatomic) NSString *stringResult;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithError:(id)a0;
- (id)initWithNumber:(id)a0;

@end
