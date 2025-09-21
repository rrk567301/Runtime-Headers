@class NSString, REMObjectID;

@interface REMAlarmTrigger : NSObject <REMObjectIDProviding, NSSecureCoding>

@property (class, readonly, nonatomic) NSString *cdEntityName;
@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) char isTemporal;
@property (readonly, nonatomic) REMObjectID *remObjectID;

+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithObjectID:(id)a0;
- (id)_deepCopy;
- (char)isContentEqual:(id)a0;
- (id)initWithAlarmTrigger:(id)a0 objectID:(id)a1;

@end
