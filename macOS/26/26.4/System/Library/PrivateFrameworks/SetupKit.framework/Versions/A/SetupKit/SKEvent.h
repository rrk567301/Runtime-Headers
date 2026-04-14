@class NSError;

@interface SKEvent : NSObject

@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, nonatomic) int eventType;

- (id)descriptionWithLevel:(int)a0;
- (void).cxx_destruct;
- (id)initWithEventType:(int)a0;
- (id)description;
- (id)initWithEventType:(int)a0 error:(id)a1;

@end
