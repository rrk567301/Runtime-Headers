@class NSSet;
@protocol ASDTIOServiceManagerDelegate;

@interface ASDTIOServiceManagerDelegateProxy : NSObject

@property (weak, nonatomic) id<ASDTIOServiceManagerDelegate> delegate;
@property (retain, nonatomic) NSSet *idValues;

- (void).cxx_destruct;

@end
