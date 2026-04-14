@class NSString;

@interface AMSPresentationConfig : NSObject {
    void /* function */ style;
    void /* function */ subsystem;
}

@property (nonatomic, readonly) NSString *style;
@property (nonatomic, readonly) NSString *subsystem;
@property (nonatomic, readonly) long long hash;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithStyle:(id)a0 subsystem:(id)a1;

@end
