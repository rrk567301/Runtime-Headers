@class NSString, NSDictionary;

@interface _SCRObserverIDNotificationDataTuple : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long observerID;
@property (readonly, copy, nonatomic) NSString *notification;
@property (readonly, copy, nonatomic) NSDictionary *data;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithObserverID:(unsigned long long)a0 notification:(id)a1 data:(id)a2;

@end
