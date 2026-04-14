@class LNDialog, NSUUID, NSArray, LNViewSnippet;

@interface LNChoiceRequest : LNRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSArray *options;
@property (readonly, nonatomic) LNDialog *dialog;
@property (readonly, copy, nonatomic) LNViewSnippet *viewSnippet;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)respondWithError:(id)a0;
- (id)initWithIdentifier:(id)a0 options:(id)a1 dialog:(id)a2 viewSnippet:(id)a3;
- (void)respondWithOption:(id)a0;

@end
