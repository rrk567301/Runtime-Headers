@interface HMBModelFieldOption : HMFObject

+ (id)queryableField;
+ (id)queryableFieldWithEncodeBlock:(id /* block */)a0 decodeBlock:(id /* block */)a1;
+ (id)encryptedExternalRecordField:(id)a0;
+ (id)excludeFromCloudStorage;
+ (id)externalRecordField:(id)a0;
+ (id)queryableFieldWithEncodeBlock:(id /* block */)a0 decodeBlock:(id /* block */)a1 descriptionBlock:(id /* block */)a2;

- (void)applyTo:(id)a0;

@end
