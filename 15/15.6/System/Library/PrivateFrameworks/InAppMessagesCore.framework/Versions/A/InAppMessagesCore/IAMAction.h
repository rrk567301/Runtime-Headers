@class NSString, NSURL, NSDictionary;

@interface IAMAction : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *displayText;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) char requiresDelegate;
@property (readonly, nonatomic) NSDictionary *actionParameters;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithICAction:(id)a0;
- (id)initWithIdentifier:(id)a0 displayText:(id)a1 url:(id)a2 requiresDelegate:(char)a3 actionParameters:(id)a4;

@end
