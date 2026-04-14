@class NSString;

@interface NSNibAuxiliaryActionConnector : NSNibConnector

@property (copy) NSString *trigger;

+ (id)classFallbacksForKeyedArchiver;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)establishConnection;

@end
