@class EKRecurrenceIdentifier, NSString, NSDate, NSManagedObjectID;

@interface EKRecurrenceException : NSObject <EKRecurrenceIdentifierProtocol>

@property (retain) EKRecurrenceIdentifier *recurrenceIdentifier;
@property (retain) NSManagedObjectID *masterManagedObjectID;
@property (readonly) NSDate *exceptionDateUnadjustedFromUTC;
@property (readonly) NSString *localUID;
@property (readonly) NSDate *recurrenceDateUnadjustedFromUTC;
@property (readonly, nonatomic) NSString *identifierString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exceptionForEvent:(id)a0;
+ (id)_exceptionForEventOccurrence:(id)a0;
+ (id)_exceptionForEventOccurrence:(id)a0 date:(id)a1;
+ (id)exceptionForEvent:(id)a0 date:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
