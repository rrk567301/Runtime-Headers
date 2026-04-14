@protocol MKAPIServerDelegate;

@interface MKAPIServer : NSObject

@property (weak, nonatomic) id<MKAPIServerDelegate> delegate;

- (void).cxx_destruct;

@end
