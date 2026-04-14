@class NSArray, NSMutableArray, NSData;

@interface SYBacklinkFilterCache : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *activityTypes;
@property (retain, nonatomic) NSMutableArray *entries;
@property (retain, nonatomic) NSData *data;

- (void)finalize;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)containsMatchingEntriesForItem:(id)a0;
- (void)addEntriesForItem:(id)a0;
- (id)initWithActivityTypes:(id)a0;

@end
