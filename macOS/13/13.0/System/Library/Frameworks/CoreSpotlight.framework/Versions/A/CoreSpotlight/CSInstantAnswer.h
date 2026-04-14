@class NSMutableArray, CSDonatedEvent;

@interface CSInstantAnswer : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *actions;
@property (retain, nonatomic) CSDonatedEvent *event;

+ (id)instantAnswersFromData:(id)a0;
+ (id)dataFromInstantAnswers:(id)a0;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)attributes;
- (void)addAction:(id)a0;
- (id)initWithAttributes:(id)a0;
- (id)initWithEvent:(id)a0;

@end
