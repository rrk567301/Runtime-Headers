@class NSString;

@interface CNIndexChangeHistoryEvents : NSObject <CNChangeHistoryEventVisitor>

@property (nonatomic) BOOL stop;
@property (copy, nonatomic) id /* block */ block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (BOOL)enumerateEvents:(id)a0 usingBlock:(id /* block */)a1;

- (void)visitDeleteContactEvent:(id)a0;
- (void)visitDropEverythingEvent:(id)a0;
- (void)visitUpdateContactEvent:(id)a0;
- (void)visitAddContactEvent:(id)a0;
- (void).cxx_destruct;

@end
