@class NSDate;

@interface _CDEventIndexerBookmark : NSObject <NSSecureCoding> {
    NSDate *_earliestCreationDate;
    NSDate *_latestCreationDate;
    NSDate *_latestTombstoneDate;
    long long _version;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
