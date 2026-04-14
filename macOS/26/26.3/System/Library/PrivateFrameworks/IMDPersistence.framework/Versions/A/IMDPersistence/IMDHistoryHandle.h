@class NSString;

@interface IMDHistoryHandle : NSObject <NSCoding>

@property (retain) NSString *serviceName;
@property (retain) NSString *ID;
@property (retain) NSString *accountID;
@property (retain) NSString *loginID;
@property BOOL isAnonymous;

- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;

@end
