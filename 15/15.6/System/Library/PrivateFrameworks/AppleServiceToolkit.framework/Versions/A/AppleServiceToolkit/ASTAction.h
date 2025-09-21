@class NSDictionary, NSString;

@interface ASTAction : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char generatedId;
@property (readonly) NSDictionary *dictionaryValue;
@property (readonly) NSString *action;
@property (readonly) NSString *identifier;
@property (readonly) NSDictionary *parameters;
@property unsigned long long progress;
@property long long resultCode;
@property (retain) NSDictionary *results;
@property (getter=isFinished) char finished;
@property (copy) id /* block */ completion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)acceptableDecoderClasses;
- (id)initWithAction:(id)a0 data:(id)a1;

@end
