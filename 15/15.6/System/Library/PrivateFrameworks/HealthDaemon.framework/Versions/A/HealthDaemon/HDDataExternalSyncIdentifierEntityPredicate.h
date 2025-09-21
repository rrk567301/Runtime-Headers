@class NSString, HDSQLitePredicate;

@interface HDDataExternalSyncIdentifierEntityPredicate : HDSQLitePredicate <HDMetadataPredicate> {
    HDSQLitePredicate *_valuePredicate;
    char _matchObjectsWithoutKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicateWithMetadataKey:(id)a0 allowedValues:(id)a1;
+ (id)predicateWithMetadataKey:(id)a0 exists:(char)a1;
+ (id)predicateWithMetadataKey:(id)a0 value:(id)a1 operatorType:(unsigned long long)a2;

@end
