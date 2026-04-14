@class NSString, NSArray, ATXNamedHandle, NSDate;

@interface ATXMailMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *mailID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSDate *dateReceived;
@property (readonly, nonatomic) ATXNamedHandle *sender;
@property (readonly, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) NSString *body;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMailID:(id)a0 bundleID:(id)a1 dateReceived:(id)a2 sender:(id)a3 recipients:(id)a4 subject:(id)a5 body:(id)a6;

@end
