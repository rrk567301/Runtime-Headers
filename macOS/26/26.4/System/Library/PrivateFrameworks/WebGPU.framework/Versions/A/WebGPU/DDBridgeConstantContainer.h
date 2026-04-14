@class NSArray, NSString;

@interface DDBridgeConstantContainer : NSObject {
    void /* function */ constantValues;
    void /* function */ name;
}

@property (nonatomic, readonly) long long constant;
@property (nonatomic, readonly) NSArray *constantValues;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)init;
- (id)initWithConstant:(long long)a0 constantValues:(id)a1 name:(id)a2;

@end
