@class NSString, NSObject;
@protocol BMIdentifiableContentEvent;

@interface HVConsumptionContext : NSObject {
    id /* block */ _scheduledTaskShouldContinueBlock;
}

@property (readonly, nonatomic) NSObject<BMIdentifiableContentEvent> *content;
@property (readonly, nonatomic) NSString *contentProtection;

- (id)description;
- (void).cxx_destruct;
- (BOOL)shouldContinue;
- (id)initWithContent:(id)a0 contentProtection:(id)a1 scheduledTaskShouldContinueBlock:(id /* block */)a2;

@end
