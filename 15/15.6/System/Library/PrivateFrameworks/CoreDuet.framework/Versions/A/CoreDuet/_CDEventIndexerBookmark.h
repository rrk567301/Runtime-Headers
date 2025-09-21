@class NSDate;

@interface _CDEventIndexerBookmark : NSObject <NSSecureCoding> {
    NSDate *_earliestCreationDate;
    NSDate *_latestCreationDate;
    NSDate *_latestTombstoneDate;
    long long _version;
}

@property (class, readonly) char supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
