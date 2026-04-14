@class NSString;

@interface DDBridgeInputOutput : NSObject {
    void /* function */ name;
}

@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)init;
- (id)initWithType:(int)a0 name:(id)a1;

@end
