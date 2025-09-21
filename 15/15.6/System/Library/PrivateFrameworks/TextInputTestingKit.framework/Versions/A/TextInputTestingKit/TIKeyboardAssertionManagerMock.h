@class NSString;
@protocol TIKeyboardAssertionManagerDelegate;

@interface TIKeyboardAssertionManagerMock : NSObject <TIKeyboardAssertionManaging>

@property (readonly, nonatomic) char hasAssertions;
@property (readonly, nonatomic) char hasBackgroundActivityAssertions;
@property (nonatomic) id<TIKeyboardAssertionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
