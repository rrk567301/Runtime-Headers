@class NSDictionary, CalSingleDatabaseInMemoryChangeTimestamp;

@interface CADInMemoryChangeTimestamp : NSObject <NSSecureCoding, NSCopying> {
    CalSingleDatabaseInMemoryChangeTimestamp *_universalTimestamp;
    NSDictionary *_timestamps;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)timestampForNow;
+ (BOOL)doesTimestamp:(id)a0 includeAllChangesVisibleToTimestamp:(id)a1;

- (id)description;
- (id)timestampForDatabase:(int)a0;
- (id)allDatabases;
- (id)initWithTimestamps:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)timestamps;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
