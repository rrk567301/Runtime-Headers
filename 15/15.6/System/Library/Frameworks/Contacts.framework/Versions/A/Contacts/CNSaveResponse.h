@class NSMutableDictionary;

@interface CNSaveResponse : NSObject <NSSecureCoding> {
    NSMutableDictionary *_contactSnapshotsByIndexPath;
    NSMutableDictionary *_groupSnapshotsByIndexPath;
    NSMutableDictionary *_containerSnapshotsByIndexPath;
    char _didAffectMeCard;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) char didAffectMeCard;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)applySnapshotsToSaveRequest:(id)a0;

@end
