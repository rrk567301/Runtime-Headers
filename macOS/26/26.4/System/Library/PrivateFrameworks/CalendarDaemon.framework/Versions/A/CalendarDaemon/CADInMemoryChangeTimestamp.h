@class NSDictionary, CalSingleDatabaseInMemoryChangeTimestamp;

@interface CADInMemoryChangeTimestamp : NSObject <NSSecureCoding, NSCopying> {
    CalSingleDatabaseInMemoryChangeTimestamp *_universalTimestamp;
    NSDictionary *_timestamps;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)timestampForNow;
+ (BOOL)doesTimestamp:(id)a0 includeAllChangesVisibleToTimestamp:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allDatabases;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)timestampForDatabase:(int)a0;
- (id)description;
- (id)initWithTimestamps:(id)a0;
- (id)redactedDescription;
- (id)initWithCoder:(id)a0;
- (id)timestamps;

@end
