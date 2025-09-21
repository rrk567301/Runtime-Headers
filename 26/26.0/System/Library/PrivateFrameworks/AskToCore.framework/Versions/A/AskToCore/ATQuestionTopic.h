@class NSString;

@interface ATQuestionTopic : NSObject {
    void /* function */ rawValue;
}

@property (nonatomic, readonly) NSString *rawValue;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRawValue:(id)a0;

@end
