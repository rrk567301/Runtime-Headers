@class EKObjectID;

@interface EventKit.EKRemoteUIPersistentObjectPointer : NSObject <NSSecureCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) EKObjectID *objectID;
@property (nonatomic, readonly) BOOL isPendingInsert;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
