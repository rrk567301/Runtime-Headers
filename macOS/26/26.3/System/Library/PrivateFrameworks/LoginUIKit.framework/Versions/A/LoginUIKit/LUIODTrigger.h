@class NSString;

@interface LUIODTrigger : NSObject

@property (readonly, copy) NSString *userName;
@property (readonly) unsigned long long type;

+ (id)addedTriggerForUser:(id)a0;
+ (id)deletedTriggerForUser:(id)a0;
+ (id)modifiedTriggerForUser:(id)a0;

- (id)description;
- (id)_typeDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initTriggerType:(unsigned long long)a0 forUser:(id)a1;

@end
