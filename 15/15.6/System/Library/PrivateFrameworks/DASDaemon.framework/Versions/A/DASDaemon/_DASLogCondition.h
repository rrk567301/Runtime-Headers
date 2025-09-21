@class NSObject;

@interface _DASLogCondition : NSObject

@property (retain, nonatomic) NSObject *condition;
@property (nonatomic) char isIdeal;

+ (id)withCondition:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end
