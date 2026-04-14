@class NSString;

@interface ATQuestionTopic : NSObject {
    void /* function */ rawValue;
}

@property (nonatomic, readonly) NSString *rawValue;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithRawValue:(id)a0;

@end
