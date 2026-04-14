@class LNDialog, NSUUID, NSString, NSArray;

@interface LNDisambiguationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSString *parameterName;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) LNDialog *dialog;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)respondWithError:(id)a0;
- (id)initWithIdentifier:(id)a0 parameterName:(id)a1 items:(id)a2 dialog:(id)a3;
- (void)respondWithSelectedItemIndex:(long long)a0;

@end
