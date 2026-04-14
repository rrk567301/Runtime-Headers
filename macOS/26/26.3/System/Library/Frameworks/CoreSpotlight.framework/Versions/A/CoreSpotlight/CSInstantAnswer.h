@class NSMutableArray, CSDonatedEvent;

@interface CSInstantAnswer : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *actions;
@property (retain, nonatomic) CSDonatedEvent *event;

+ (id)dataFromInstantAnswers:(id)a0;
+ (id)instantAnswersFromData:(id)a0;

- (id)initWithEvent:(id)a0;
- (id)description;
- (id)attributes;
- (id)initWithAttributes:(id)a0;
- (void).cxx_destruct;
- (void)addAction:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
