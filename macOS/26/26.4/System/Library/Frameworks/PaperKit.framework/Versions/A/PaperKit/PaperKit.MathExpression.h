@class NSString, NSNumber;

@interface PaperKit.MathExpression : NSObject <CHMathExpression> {
    void /* function */ expression;
}

@property (nonatomic, copy) NSString *expression;
@property (nonatomic) long long expressionType;
@property (nonatomic, retain) NSNumber *strokeGroupIdentifier;
@property (nonatomic) BOOL isAssociatedWithCurrentSession;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
