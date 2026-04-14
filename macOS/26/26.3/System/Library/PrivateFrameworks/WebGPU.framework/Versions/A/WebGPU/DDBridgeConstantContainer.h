@class NSArray, NSString;

@interface DDBridgeConstantContainer : NSObject {
    void /* function */ constantValues;
    void /* function */ name;
}

@property (nonatomic, readonly) int constant;
@property (nonatomic, readonly) NSArray *constantValues;
@property (nonatomic, readonly) NSString *name;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConstant:(int)a0 constantValues:(id)a1 name:(id)a2;

@end
