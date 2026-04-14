@class TPSDeliveryPrecondition;

@interface TPSDeliveryNotification : TPSSerializableObject <NSCopying>

@property (nonatomic) BOOL suppress;
@property (nonatomic) BOOL overrideOptOut;
@property (retain, nonatomic) TPSDeliveryPrecondition *precondition;

+ (id)notificationFromDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
