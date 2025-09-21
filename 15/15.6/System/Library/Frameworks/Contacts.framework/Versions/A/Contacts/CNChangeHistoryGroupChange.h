@class CNGroup, CNChangeHistoryAnchor, NSString, NSNumber;

@interface CNChangeHistoryGroupChange : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long changeType;
@property (retain, nonatomic) CNGroup *group;
@property (retain, nonatomic) CNChangeHistoryAnchor *changeAnchor;
@property (retain, nonatomic) NSNumber *changeID;
@property (retain, nonatomic) NSString *externalID;
@property (retain, nonatomic) NSString *externalURI;
@property (retain, nonatomic) NSString *externalModificationTag;
@property (readonly, nonatomic) NSString *groupIdentifier;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 changeType:(long long)a1 changeAnchor:(id)a2 changeID:(id)a3 externalID:(id)a4;

@end
