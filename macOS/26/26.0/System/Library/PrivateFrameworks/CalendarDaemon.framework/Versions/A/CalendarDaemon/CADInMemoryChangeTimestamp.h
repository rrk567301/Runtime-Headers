@class NSDictionary, CalSingleDatabaseInMemoryChangeTimestamp;

@interface CADInMemoryChangeTimestamp : NSObject <NSSecureCoding, NSCopying> {
    CalSingleDatabaseInMemoryChangeTimestamp *_universalTimestamp;
    NSDictionary *_timestamps;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)doesTimestamp:(id)a0 includeAllChangesVisibleToTimestamp:(id)a1;
+ (id)timestampForNow;

- (id)timestampForDatabase:(int)a0;
- (id)timestamps;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithTimestamps:(id)a0;
- (id)allDatabases;
- (void).cxx_destruct;
- (id)redactedDescription;

@end
