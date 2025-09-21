@class CKDistributedTimestampStateVector, CCSet, NSString;

@interface CCSetChangeBookmark : NSObject <BMBookmark>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CKDistributedTimestampStateVector *contentVector;
@property (readonly, nonatomic) CKDistributedTimestampStateVector *metaContentVector;
@property (readonly, nonatomic) long long localResourceGeneration;
@property (readonly, nonatomic) int bookmarkVersion;
@property (readonly, nonatomic) long long lastDeltaDate;
@property (readonly, nonatomic) CCSet *set;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)currentBookmarkVersion;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithContentVector:(id)a0 metaContentVector:(id)a1 localResourceGeneration:(long long)a2 lastDeltaDate:(long long)a3 set:(id)a4;
- (BOOL)isEqualToSetChangeBookmark:(id)a0;

@end
