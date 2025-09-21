@class NSUUID, NSString, NSDate, NSError, NSManagedObjectID;

@interface NSPersistentCloudKitContainerEvent : NSObject <NSCopying> {
    NSManagedObjectID *_ckEventObjectID;
}

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSString *storeIdentifier;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) char succeeded;
@property (readonly, nonatomic) NSError *error;

+ (id)eventTypeString:(long long)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (id)initWithCKEvent:(id)a0;

@end
