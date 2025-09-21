@class NSString, NSDate;

@interface OSLogEntry : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *composedMessage;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long storeCategory;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEventProxy:(id)a0;
- (id)initWithDate:(id)a0 composedMessage:(id)a1;

@end
