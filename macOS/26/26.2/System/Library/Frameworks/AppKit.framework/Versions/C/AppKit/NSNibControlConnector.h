@interface NSNibControlConnector : NSNibConnector

+ (void)initialize;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)establishConnection;

@end
