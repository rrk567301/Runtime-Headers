@class NSString;

@interface DMCNextNag : NSObject {
    void /* function */ date;
}

@property (nonatomic, readonly) NSString *date;
@property (nonatomic, readonly) BOOL nearDeadline;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0 nearDeadline:(BOOL)a1;

@end
