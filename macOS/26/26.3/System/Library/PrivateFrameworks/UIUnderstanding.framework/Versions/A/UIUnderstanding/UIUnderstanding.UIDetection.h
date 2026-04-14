@class NSString;

@interface UIUnderstanding.UIDetection : NSObject {
    void /* function */ text;
    void /* unknown type, empty encoding */ vfeature;
}

@property (nonatomic, readonly) long long label;
@property (nonatomic, readonly) NSString *labelString;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, copy) NSString *text;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLabel:(long long)a0 confidence:(double)a1 text:(id)a2;

@end
