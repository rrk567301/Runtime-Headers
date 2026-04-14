@class NSUUID, LNSuccessResult;

@interface LNActionConfirmationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, copy, nonatomic) LNSuccessResult *result;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)respondWithError:(id)a0;
- (void)respondWithConfirmation:(BOOL)a0;
- (id)initWithIdentifier:(id)a0 result:(id)a1;

@end
