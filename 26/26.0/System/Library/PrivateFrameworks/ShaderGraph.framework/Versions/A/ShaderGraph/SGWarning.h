@class NSString;

@interface SGWarning : NSObject {
    void /* function */ message;
}

@property (nonatomic, readonly) NSString *message;

- (id)init;
- (void).cxx_destruct;

@end
