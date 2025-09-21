@class EKObjectID;

@interface EventKit.EKRemoteUIPersistentObjectPointer : NSObject <NSSecureCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) EKObjectID *objectID;
@property (nonatomic, readonly) BOOL isPendingInsert;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
