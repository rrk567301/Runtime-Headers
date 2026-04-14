@class NSManagedObjectID;

@interface CalExchangeGetEffectiveRightsOperation : CalExchangeOperation {
    NSManagedObjectID *_calendarObjectID;
}

+ (id)responseShape;
+ (void)setPermission:(id)a0 withEffectiveRights:(id)a1;

- (void)dealloc;
- (BOOL)executeWithBinding:(id)a0 inSession:(id)a1 inContext:(id)a2 error:(id *)a3;
- (id)initWithSession:(id)a0 calendarObjectID:(id)a1;

@end
