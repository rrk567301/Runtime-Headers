@class NSString, NSData, NSArray;

@interface GTCommandBufferIssue : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *metalLogMessage;
@property (copy, nonatomic) NSData *commandBufferCommitCallstackData;
@property (nonatomic) unsigned int commandBufferCommitCallstackFramesNum;
@property (copy, nonatomic) NSArray *faultingEncoders;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
