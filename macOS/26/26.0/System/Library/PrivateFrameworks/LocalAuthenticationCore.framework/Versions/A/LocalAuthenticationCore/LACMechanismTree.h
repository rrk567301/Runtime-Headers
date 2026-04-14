@class NSArray, NSString;

@interface LACMechanismTree : NSObject {
    void /* function */ children;
}

@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly) BOOL isAnd;
@property (nonatomic, readonly) long long value;
@property (nonatomic, readonly) NSString *description;

+ (id)mechanismTreeFromError:(id)a0;
+ (id)mechanismTreeFromSerializedTree:(id)a0;

- (id)initWithValue:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithChildren:(id)a0 isAndNode:(BOOL)a1;
- (BOOL)isSatisfiableWithValue:(long long)a0;
- (BOOL)isValue:(long long)a0 replaceableByValue:(long long)a1;
- (BOOL)isValueRequired:(long long)a0;

@end
