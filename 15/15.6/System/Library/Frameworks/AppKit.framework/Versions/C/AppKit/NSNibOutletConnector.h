@class NSString;

@interface NSNibOutletConnector : NSNibConnector

@property (copy) NSString *childControllerCreationSelectorName;

+ (void)initialize;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_shouldUseSelector:(SEL)a0 forOutlet:(id)a1 source:(id)a2;
- (void)establishConnection;

@end
