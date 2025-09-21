@class NSString, NSArray;

@interface GTTpacketRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *selector;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) unsigned long long requestID;
@property (retain, nonatomic) NSArray *requests;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
