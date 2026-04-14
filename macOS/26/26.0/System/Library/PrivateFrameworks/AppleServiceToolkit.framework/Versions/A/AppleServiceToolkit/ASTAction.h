@class NSDictionary, NSString;

@interface ASTAction : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL generatedId;
@property (readonly) NSDictionary *dictionaryValue;
@property (readonly) NSString *action;
@property (readonly) NSString *identifier;
@property (readonly) NSDictionary *parameters;
@property unsigned long long progress;
@property long long resultCode;
@property (retain) NSDictionary *results;
@property (getter=isFinished) BOOL finished;
@property (copy) id /* block */ completion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)acceptableDecoderClasses;
- (id)initWithAction:(id)a0 data:(id)a1;

@end
