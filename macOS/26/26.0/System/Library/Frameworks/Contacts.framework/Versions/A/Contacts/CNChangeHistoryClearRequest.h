@class NSArray, NSString, CNChangeHistoryAnchor;

@interface CNChangeHistoryClearRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *contactChangeIDs;
@property (retain, nonatomic) NSArray *groupChangeIDs;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) CNChangeHistoryAnchor *toChangeAnchor;

- (id)initWithClientIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
