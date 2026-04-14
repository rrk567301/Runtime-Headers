@class NSSet, NSDate;

@interface _DNDSPendingMessageRecipients : NSObject <NSCopying>

@property (readonly, copy) NSDate *lastUpdateDate;
@property (readonly, copy) NSSet *deviceIdentifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLastUpdateDate:(id)a0 deviceIdentifiers:(id)a1;

@end
