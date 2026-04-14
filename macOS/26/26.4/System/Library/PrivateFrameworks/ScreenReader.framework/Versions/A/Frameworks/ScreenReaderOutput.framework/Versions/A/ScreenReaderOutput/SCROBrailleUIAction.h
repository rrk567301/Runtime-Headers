@class SCROBrailleUIView, NSString;

@interface SCROBrailleUIAction : NSObject

@property (readonly) unsigned long long type;
@property (readonly, weak) SCROBrailleUIView *originator;
@property (retain, nonatomic) NSString *value;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 originator:(id)a1;

@end
