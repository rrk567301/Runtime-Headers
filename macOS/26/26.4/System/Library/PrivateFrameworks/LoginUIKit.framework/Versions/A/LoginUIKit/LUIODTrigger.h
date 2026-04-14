@class NSString;

@interface LUIODTrigger : NSObject

@property (readonly, copy) NSString *userName;
@property (readonly) unsigned long long type;

+ (id)addedTriggerForUser:(id)a0;
+ (id)deletedTriggerForUser:(id)a0;
+ (id)modifiedTriggerForUser:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)_typeDescription;
- (id)description;
- (id)initTriggerType:(unsigned long long)a0 forUser:(id)a1;

@end
