@class NSString;

@interface NSNibAuxiliaryActionConnector : NSNibConnector

@property (copy) NSString *trigger;

+ (id)classFallbacksForKeyedArchiver;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (void)establishConnection;

@end
