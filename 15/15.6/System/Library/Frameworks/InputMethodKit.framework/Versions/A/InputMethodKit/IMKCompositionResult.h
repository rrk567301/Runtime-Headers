@interface IMKCompositionResult : NSObject {
    char _success;
}

@property (readonly, nonatomic, getter=isSuccess) char success;

+ (id)compositionResultWithSuccess:(char)a0;

- (id)initWithSuccess:(char)a0;

@end
