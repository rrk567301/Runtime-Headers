@class NSSet, NSDate;

@interface _DNDSPendingMessageRecipients : NSObject <NSCopying>

@property (readonly, copy) NSDate *lastUpdateDate;
@property (readonly, copy) NSSet *deviceIdentifiers;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLastUpdateDate:(id)a0 deviceIdentifiers:(id)a1;

@end
