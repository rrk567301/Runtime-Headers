@class NSArray, NSString, CNChangeHistoryAnchor;

@interface CNChangeHistoryClearRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *contactChangeIDs;
@property (retain, nonatomic) NSArray *groupChangeIDs;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) CNChangeHistoryAnchor *toChangeAnchor;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithClientIdentifier:(id)a0;

@end
