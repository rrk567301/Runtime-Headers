@class NSString, NSValue, WFFileType;

@interface WFCloudKitItemProperty : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) Class itemClass;
@property (readonly, nonatomic, getter=isIgnoredByDefault) char ignoredByDefault;
@property (readonly, nonatomic, getter=isEncrypted) char encrypted;
@property (readonly, nonatomic) NSValue *nilValue;
@property (readonly, nonatomic) char hasConstantValue;
@property (readonly, nonatomic) id constantValue;
@property (readonly, nonatomic) WFFileType *fileType;

+ (id)assetPropertyWithName:(id)a0 fileType:(id)a1;
+ (id)itemPropertyWithName:(id)a0 itemClass:(Class)a1;
+ (id)assetPropertyWithName:(id)a0;
+ (id)assetPropertyWithName:(id)a0 fileType:(id)a1 ignoredByDefault:(char)a2 encrypted:(char)a3;
+ (id)itemReferencePropertyWithName:(id)a0 itemClass:(Class)a1;
+ (id)objectPropertyWithName:(id)a0;
+ (id)objectPropertyWithName:(id)a0 constantValue:(id)a1;
+ (id)objectPropertyWithName:(id)a0 constantValue:(id)a1 encrypted:(char)a2;
+ (id)objectPropertyWithName:(id)a0 ignoredByDefault:(char)a1 encrypted:(char)a2;
+ (id)scalarPropertyWithName:(id)a0 constantValue:(id)a1;
+ (id)scalarPropertyWithName:(id)a0 nilValue:(id)a1;
+ (id)scalarPropertyWithName:(id)a0 nilValue:(id)a1 ignoredByDefault:(char)a2 encrypted:(char)a3;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 name:(id)a1 itemClass:(Class)a2 ignoredByDefault:(char)a3 nilValue:(id)a4 hasConstantValue:(char)a5 constantValue:(id)a6 fileType:(id)a7 encrypted:(char)a8;

@end
