@class NSArray, NSMutableArray, NSData;

@interface SYBacklinkFilterCache : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *activityTypes;
@property (retain, nonatomic) NSMutableArray *entries;
@property (retain, nonatomic) NSData *data;

- (void)finalize;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)containsMatchingEntriesForItem:(id)a0;
- (void)addEntriesForItem:(id)a0;
- (id)initWithActivityTypes:(id)a0;

@end
