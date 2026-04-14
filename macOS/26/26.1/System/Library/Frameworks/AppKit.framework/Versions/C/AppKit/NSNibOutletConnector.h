@class NSString;

@interface NSNibOutletConnector : NSNibConnector

@property (copy) NSString *childControllerCreationSelectorName;

+ (void)initialize;

- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)_shouldUseSelector:(SEL)a0 forOutlet:(id)a1 source:(id)a2;
- (void)establishConnection;

@end
