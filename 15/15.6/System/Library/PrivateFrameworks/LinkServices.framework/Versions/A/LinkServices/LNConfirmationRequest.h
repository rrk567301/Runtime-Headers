@class LNDialog, NSUUID, NSString, LNValue, LNViewSnippet;

@interface LNConfirmationRequest : LNRequest <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSString *parameterName;
@property (readonly, nonatomic) LNValue *value;
@property (readonly, copy, nonatomic) LNDialog *dialog;
@property (readonly, copy, nonatomic) LNViewSnippet *viewSnippet;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)respondWithError:(id)a0;
- (void)respondWithConfirmation:(char)a0;
- (id)initWithIdentifier:(id)a0 parameterName:(id)a1 value:(id)a2 dialog:(id)a3 viewSnippet:(id)a4;
- (void)respondWithUpdates:(id)a0;

@end
