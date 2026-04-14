@class NSArray, BTMItem, NSError;

@interface BTMFetchResult : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *containers;
@property (retain) NSArray *encodedItems;
@property long long code;
@property (copy) NSArray *items;
@property (readonly) BTMItem *firstItem;
@property (readonly) NSError *error;

+ (id)resultWithCode:(long long)a0 item:(id)a1;
+ (id)resultWithCode:(long long)a0 items:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCode:(long long)a0 items:(id)a1;

@end
