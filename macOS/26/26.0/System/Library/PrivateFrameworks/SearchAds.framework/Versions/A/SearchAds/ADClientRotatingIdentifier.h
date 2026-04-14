@class NSString;

@interface ADClientRotatingIdentifier : NSObject {
    void /* function */ value;
}

@property (nonatomic, copy) NSString *value;
@property (nonatomic) long long type;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRotatingIdentifier:(id)a0;

@end
