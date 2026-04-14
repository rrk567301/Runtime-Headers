@class NSString;

@interface DDBridgeInputOutput : NSObject {
    void /* function */ name;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)init;
- (id)initWithType:(long long)a0 name:(id)a1;

@end
