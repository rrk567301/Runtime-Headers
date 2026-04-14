@class NSString;

@interface VIAEntryPointEvent : NSObject <VIAEvent>

@property (nonatomic) unsigned long long queryID;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *originatingApplication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)feedback;
- (id)initWithQueryID:(unsigned long long)a0 type:(long long)a1 originatingApplication:(id)a2;

@end
