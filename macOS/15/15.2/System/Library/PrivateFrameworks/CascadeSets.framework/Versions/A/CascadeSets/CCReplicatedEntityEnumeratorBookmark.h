@class CKDistributedTimestampStateVector, NSString;

@interface CCReplicatedEntityEnumeratorBookmark : NSObject <BMBookmark>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CKDistributedTimestampStateVector *contentVector;
@property (readonly, nonatomic) CKDistributedTimestampStateVector *metaContentVector;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)currentVersion;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContentVector:(id)a0 metaContentVector:(id)a1;
- (id)initWithContentVector:(id)a0 metaContentVector:(id)a1 version:(unsigned long long)a2;

@end
