@interface SCROBrailleUIEvent : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) long long location;

+ (id)eventWithType:(unsigned long long)a0;
+ (id)selectEventWithLocation:(long long)a0;
+ (id)selectUpToEventWithLocation:(long long)a0;

- (id)initWithType:(unsigned long long)a0 location:(long long)a1;

@end
