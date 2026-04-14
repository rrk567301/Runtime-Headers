@class NSMutableDictionary;

@interface PKMapContainer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSMutableDictionary *recipientMap;
@property (readonly, copy, nonatomic) NSMutableDictionary *scoreMap;
@property (readonly, nonatomic) long long version;

- (void)updateWithContainer:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
